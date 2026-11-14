typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

void __dcbt(int offset, const void *base);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);

typedef struct Matrix_8280D518 {
    __vector4 r[4];
} Matrix_8280D518;

static __forceinline Matrix_8280D518 Transpose(const Matrix_8280D518 *m)
{
    Matrix_8280D518 p, mt;
    __vector4 r0 = m->r[0], r1 = m->r[1], r2 = m->r[2], r3 = m->r[3];

    p.r[0] = __vmrghw(r0, r2);
    p.r[1] = __vmrghw(r1, r3);
    p.r[2] = __vmrglw(r0, r2);
    p.r[3] = __vmrglw(r1, r3);
    mt.r[0] = __vmrghw(p.r[0], p.r[1]);
    mt.r[1] = __vmrglw(p.r[0], p.r[1]);
    mt.r[2] = __vmrghw(p.r[2], p.r[3]);
    mt.r[3] = __vmrglw(p.r[2], p.r[3]);
    return mt;
}

extern void fn_8280CED8(const Matrix_8280D518 *m, Matrix_8280D518 *out);

void fn_8280D518(const Matrix_8280D518 *m, Matrix_8280D518 *out)
{
    Matrix_8280D518 t;
    fn_8280CED8(m, out);
    __dcbt(0, out);
    t = Transpose(out);
    out->r[0] = t.r[0];
    out->r[1] = t.r[1];
    out->r[2] = t.r[2];
    out->r[3] = t.r[3];
}
