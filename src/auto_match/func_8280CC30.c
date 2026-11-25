typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);

typedef struct Matrix_8280CC30 {
    __vector4 r[4];
} Matrix_8280CC30;

static __forceinline Matrix_8280CC30 Transpose(const Matrix_8280CC30 *m)
{
    Matrix_8280CC30 p, mt;
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

/* out = transpose(m1 * m2): row j of out holds column j of the product. */
void fn_8280CC30(const Matrix_8280CC30 *m2, const Matrix_8280CC30 *m1, Matrix_8280CC30 *out)
{
    Matrix_8280CC30 t;
    __vector4 b0, b1, b2, b3;
    __vector4 d00, d01, d02, d03;
    __vector4 d10, d11, d12, d13;
    __vector4 d20, d21, d22, d23;
    __vector4 d30, d31, d32, d33;

    t = Transpose(m2);
    b0 = m1->r[0];
    b1 = m1->r[1];
    b2 = m1->r[2];
    b3 = m1->r[3];
    d00 = __vmsum4fp(b0, t.r[0]);
    d01 = __vmsum4fp(b0, t.r[1]);
    d02 = __vmsum4fp(b0, t.r[2]);
    d03 = __vmsum4fp(b0, t.r[3]);
    d10 = __vmsum4fp(b1, t.r[0]);
    d11 = __vmsum4fp(b1, t.r[1]);
    d12 = __vmsum4fp(b1, t.r[2]);
    d13 = __vmsum4fp(b1, t.r[3]);
    d20 = __vmsum4fp(b2, t.r[0]);
    d21 = __vmsum4fp(b2, t.r[1]);
    d22 = __vmsum4fp(b2, t.r[2]);
    d23 = __vmsum4fp(b2, t.r[3]);
    d30 = __vmsum4fp(b3, t.r[0]);
    d31 = __vmsum4fp(b3, t.r[1]);
    d32 = __vmsum4fp(b3, t.r[2]);
    d33 = __vmsum4fp(b3, t.r[3]);
    out->r[0] = __vmrghw(__vmrghw(d00, d20), __vmrghw(d10, d30));
    out->r[1] = __vmrghw(__vmrghw(d01, d21), __vmrghw(d11, d31));
    out->r[2] = __vmrghw(__vmrghw(d02, d22), __vmrghw(d12, d32));
    out->r[3] = __vmrghw(__vmrghw(d03, d23), __vmrghw(d13, d33));
}
