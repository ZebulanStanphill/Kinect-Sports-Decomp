// For every element: transposes the 4x4 matrix of the second array, takes the float4 at +0xc of
// the first array's 0x34-byte element, and writes the three transposed rows with
// w -= dot3(row, vector) into the 0x30-byte output elements. Both inputs are prefetched 0x100
// bytes ahead.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

void __dcbt(int offset, const void *base);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vspltisw(int value);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);

typedef struct Matrix_827F7688 {
    __vector4 r[4];
} Matrix_827F7688;

typedef struct Matrix43_827F7688 {
    __vector4 r[3];
} Matrix43_827F7688;

typedef struct Float4_827F7688 {
    float x, y, z, w;
} Float4_827F7688;

typedef struct Entry_827F7688 {
    char pad0[0xc];
    Float4_827F7688 vector;     // 0x0c
    char pad1c[0x18];
} Entry_827F7688;

typedef union Mask_827F7688 {
    unsigned int u[4];
    __vector4 v;
} Mask_827F7688;

typedef struct Skeleton_827F7688 {
    char pad0[8];
    Entry_827F7688 *entries;       // 0x08
    Matrix_827F7688 *matrices;     // 0x0c
} Skeleton_827F7688;

unsigned short fn_827F7210(Skeleton_827F7688 *self);

static __forceinline __vector4 LoadFloat4(const Float4_827F7688 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 16);
    return __vor(vl, vr);
}

static __forceinline Matrix_827F7688 Transpose(const Matrix_827F7688 *m)
{
    Matrix_827F7688 p, mt;
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

void fn_827F7688(Skeleton_827F7688 *self, Matrix43_827F7688 *out)
{
    const Entry_827F7688 *entry = self->entries;
    const Matrix_827F7688 *matrix = self->matrices;
    int count = fn_827F7210(self);
    unsigned int bytes;
    Mask_827F7688 mask;
    int i;

    __dcbt(0, matrix);
    __dcbt(0x80, matrix);
    __dcbt(0, entry);
    __dcbt(0x80, entry);
    mask.u[0] = 0;
    mask.u[1] = 0;
    mask.u[2] = 0;
    mask.u[3] = 0xffffffff;
    bytes = 0x80;
    for (i = 0; i < count; i++) {
        Matrix_827F7688 t;
        __vector4 v;

        if (bytes >= 0x80) {
            bytes -= 0x80;
            __dcbt(0x100, matrix);
            __dcbt(0x100, entry);
        }
        t = Transpose(matrix);
        v = LoadFloat4(&entry->vector);
        out->r[0] = __vsubfp(t.r[0], __vsel(__vspltisw(0), __vmsum3fp(t.r[0], v), mask.v));
        out->r[1] = __vsubfp(t.r[1], __vsel(__vspltisw(0), __vmsum3fp(t.r[1], v), mask.v));
        out->r[2] = __vsubfp(t.r[2], __vsel(__vspltisw(0), __vmsum3fp(t.r[2], v), mask.v));
        bytes += sizeof(Matrix_827F7688);
        matrix++;
        entry++;
        out++;
    }
}
