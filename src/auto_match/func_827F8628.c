typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

void __dcbst(int offset, const void *base);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vspltisw(int value);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);

typedef struct Matrix_827F8628 {
    __vector4 r[4];
} Matrix_827F8628;

typedef struct Float4_827F8628 {
    float x, y, z, w;
} Float4_827F8628;

typedef struct Entry_827F8628 {
    char pad0[0xc];
    Float4_827F8628 vector;     // 0x0c
    char pad1c[0x18];
} Entry_827F8628;

typedef struct Skeleton_827F8628 {
    char pad0[8];
    Entry_827F8628 *entries;       // 0x08
    Matrix_827F8628 *matrices;     // 0x0c
    char pad10[0x32 - 0x10];
    unsigned short count;          // 0x32
} Skeleton_827F8628;

static __forceinline __vector4 LoadFloat4(const Float4_827F8628 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 16);
    vl = __lvlx(src, 0);
    return __vor(vl, vr);
}

static __forceinline Matrix_827F8628 TransposeM(Matrix_827F8628 m)
{
    Matrix_827F8628 p, mt;

    p.r[0] = __vmrghw(m.r[0], m.r[2]);
    p.r[1] = __vmrghw(m.r[1], m.r[3]);
    p.r[2] = __vmrglw(m.r[0], m.r[2]);
    p.r[3] = __vmrglw(m.r[1], m.r[3]);
    mt.r[0] = __vmrghw(p.r[0], p.r[1]);
    mt.r[1] = __vmrglw(p.r[0], p.r[1]);
    mt.r[2] = __vmrghw(p.r[2], p.r[3]);
    mt.r[3] = __vmrglw(p.r[2], p.r[3]);
    return mt;
}

void fn_827F8628(Skeleton_827F8628 *self)
{
    Matrix_827F8628 *matrix = self->matrices;
    const Entry_827F8628 *entry = self->entries;
    unsigned int i;

    for (i = 0; i < self->count; i++) {
        Matrix_827F8628 t, m;
        __vector4 r0, r1, r2, r3, v, d0, d1, d2, zero;

        m = *matrix;
        t = TransposeM(m);
        v = LoadFloat4(&entry->vector);
        d0 = __vmsum3fp(t.r[0], v);
        d1 = __vmsum3fp(t.r[1], v);
        d2 = __vmsum3fp(t.r[2], v);
        zero = __vspltisw(0);
        m.r[3] = __vsubfp(m.r[3], __vmrghw(__vmrglw(d0, d2), __vmrglw(d1, zero)));
        t = TransposeM(m);
        matrix->r[0] = t.r[0];
        matrix->r[1] = t.r[1];
        matrix->r[2] = t.r[2];
        matrix->r[3] = t.r[3];
        __dcbst(0, matrix);
        matrix++;
        entry++;
    }
}
