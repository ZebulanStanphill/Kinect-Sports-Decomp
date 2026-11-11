// Copies the matrix and adds the object's float4 at +0xc, transformed as a normal by the
// matrix (transpose, three dot3 products, merged to (x, y, z, 0)), to its translation row.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vspltisw(int value);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);

typedef struct Matrix_827F9658 {
    __vector4 r[4];
} Matrix_827F9658;

typedef struct Float4_827F9658 {
    float x, y, z, w;
} Float4_827F9658;

typedef struct Object_827F9658 {
    char pad0[0xc];
    Float4_827F9658 offset;     // 0x0c
} Object_827F9658;

static __forceinline __vector4 LoadFloat4(const Float4_827F9658 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 16);
    return __vor(vl, vr);
}

static __forceinline Matrix_827F9658 Transpose(__vector4 r0, __vector4 r1, __vector4 r2, __vector4 r3)
{
    Matrix_827F9658 p, mt;

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

void fn_827F9658(Object_827F9658 *self, const Matrix_827F9658 *m, Matrix_827F9658 *out)
{
    Matrix_827F9658 t;
    __vector4 r0 = m->r[0], r1 = m->r[1], r2 = m->r[2], r3 = m->r[3];
    __vector4 v, zero, x, y, z;

    zero = __vspltisw(0);
    v = LoadFloat4(&self->offset);
    t = Transpose(r0, r1, r2, r3);
    out->r[0] = r0;
    out->r[1] = r1;
    out->r[2] = r2;
    x = __vmsum3fp(t.r[0], v);
    y = __vmsum3fp(t.r[1], v);
    z = __vmsum3fp(t.r[2], v);
    out->r[3] = __vaddfp(r3, __vmrghw(__vmrglw(x, z), __vmrglw(y, zero)));
}
