typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vspltisw(int value);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);

typedef struct Matrix_827F8580 {
    __vector4 r[4];
} Matrix_827F8580;

typedef struct Float4_827F8580 {
    float x, y, z, w;
} Float4_827F8580;

typedef struct Entry_827F8580 {
    char pad0[0xc];
    Float4_827F8580 vector;     // 0x0c
    char pad1c[0x18];
} Entry_827F8580;

typedef struct Skeleton_827F8580 {
    char pad0[8];
    Entry_827F8580 *entries;       // 0x08
    Matrix_827F8580 *matrices;     // 0x0c
    char pad10[0x22];
    unsigned short count;          // 0x32
} Skeleton_827F8580;

static __forceinline __vector4 LoadFloat4(const Float4_827F8580 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 16);
    return __vor(vl, vr);
}

static __forceinline Matrix_827F8580 Transpose(const Matrix_827F8580 *m)
{
    Matrix_827F8580 p, mt;
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

void fn_827F8580(Skeleton_827F8580 *self)
{
    Matrix_827F8580 *matrix = self->matrices;
    Entry_827F8580 *entry = self->entries;
    unsigned int i;

    for (i = 0; i < self->count; i++) {
        Matrix_827F8580 t;
        __vector4 v, d0, d1, d2, zero;

        t = Transpose(matrix);
        v = LoadFloat4(&entry->vector);
        d0 = __vmsum3fp(t.r[0], v);
        d1 = __vmsum3fp(t.r[1], v);
        d2 = __vmsum3fp(t.r[2], v);
        zero = __vspltisw(0);
        matrix->r[3] = __vsubfp(matrix->r[3], __vmrghw(__vmrglw(d0, d2), __vmrglw(d1, zero)));
        matrix++;
        entry++;
    }
}
