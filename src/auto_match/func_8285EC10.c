typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);

typedef struct Matrix_8285EC10 {
    __vector4 r[4];
} Matrix_8285EC10;

static __forceinline Matrix_8285EC10 Transpose(const Matrix_8285EC10 *m)
{
    Matrix_8285EC10 p, mt;

    p.r[0] = __vmrghw(m->r[0], m->r[2]);
    p.r[1] = __vmrghw(m->r[1], m->r[3]);
    p.r[2] = __vmrglw(m->r[0], m->r[2]);
    p.r[3] = __vmrglw(m->r[1], m->r[3]);
    mt.r[0] = __vmrghw(p.r[0], p.r[1]);
    mt.r[1] = __vmrglw(p.r[0], p.r[1]);
    mt.r[2] = __vmrghw(p.r[2], p.r[3]);
    mt.r[3] = __vmrglw(p.r[2], p.r[3]);
    return mt;
}

static __forceinline __vector4 Reciprocal(__vector4 v, __vector4 one)
{
    __vector4 rcp, e, r, mask;

    rcp = __vrefp(v);
    e = __vnmsubfp(v, rcp, one);
    r = __vmaddfp(rcp, e, rcp);
    e = __vnmsubfp(v, r, one);
    mask = __vcmpeqfp(r, r);
    r = __vmaddfp(r, e, r);
    return __vsel(rcp, r, mask);
}

void fn_8285EC10(const Matrix_8285EC10 *m, const __vector4 *in, int count, __vector4 *out)
{
    Matrix_8285EC10 t;
    __vector4 one, v, x, y, z, w, xz, yw, r;
    int i;
    __vector4 *dst;
    const __vector4 *src;

    if (count > 0) {
        t = Transpose(m);
        one = __vupkd3d(__vspltisw(0), 1);
        one = __vspltw(one, 3);
        src = in;
        dst = out;
        i = count;
        do {
            v = *src;
            x = __vmsum4fp(v, t.r[0]);
            y = __vmsum4fp(v, t.r[1]);
            z = __vmsum4fp(v, t.r[2]);
            w = __vmsum4fp(v, t.r[3]);
            xz = __vmrghw(x, z);
            yw = __vmrghw(y, w);
            r = __vmrghw(xz, yw);
            *dst = __vmulfp(r, Reciprocal(__vspltw(r, 3), one));
            src++;
            dst++;
        } while (--i);
    }
}
