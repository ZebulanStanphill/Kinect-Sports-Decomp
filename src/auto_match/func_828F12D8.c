/* Unaligned 4x4 float matrix transpose: dst = transpose(src), both possibly unaligned. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvsl(const void *base, int offset);
__vector4 __lvsr(const void *base, int offset);
__vector4 __vperm(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct Float4x4_828F12D8 {
    float m[4][4];
} Float4x4_828F12D8;

typedef struct Matrix_828F12D8 {
    __vector4 r[4];
} Matrix_828F12D8;

static __forceinline Matrix_828F12D8 LoadFloat4x4(const Float4x4_828F12D8 *src)
{
    Matrix_828F12D8 m;
    __vector4 v0, v1, v2, v3, v4, perm;

    perm = __lvsl(src, 0);
    v0 = *(const __vector4 *)src;
    v1 = *(const __vector4 *)((const char *)src + 16);
    v2 = *(const __vector4 *)((const char *)src + 32);
    v3 = *(const __vector4 *)((const char *)src + 48);
    v4 = *(const __vector4 *)((const char *)src + 63);
    m.r[0] = __vperm(v0, v1, perm);
    m.r[1] = __vperm(v1, v2, perm);
    m.r[2] = __vperm(v2, v3, perm);
    m.r[3] = __vperm(v3, v4, perm);
    return m;
}

static __forceinline Matrix_828F12D8 Transpose(Matrix_828F12D8 m)
{
    Matrix_828F12D8 p, mt;

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

static __forceinline void StoreFloat4x4(Float4x4_828F12D8 *dst, Matrix_828F12D8 m)
{
    __vector4 perm, r0, r1, r2, r3;

    perm = __lvsr(dst, 0);
    r0 = __vperm(m.r[0], m.r[0], perm);
    r1 = __vperm(m.r[1], m.r[1], perm);
    r2 = __vperm(m.r[2], m.r[2], perm);
    r3 = __vperm(m.r[3], m.r[3], perm);
    __stvewx(r0, dst, 0);
    __stvewx(r0, dst, 4);
    __stvewx(r0, dst, 8);
    __stvewx(r0, dst, 12);
    __stvewx(r1, dst, 16);
    __stvewx(r1, dst, 20);
    __stvewx(r1, dst, 24);
    __stvewx(r1, dst, 28);
    __stvewx(r2, dst, 32);
    __stvewx(r2, dst, 36);
    __stvewx(r2, dst, 40);
    __stvewx(r2, dst, 44);
    __stvewx(r3, dst, 48);
    __stvewx(r3, dst, 52);
    __stvewx(r3, dst, 56);
    __stvewx(r3, dst, 60);
}

void fn_828F12D8(Float4x4_828F12D8 *dst, const Float4x4_828F12D8 *src)
{
    StoreFloat4x4(dst, Transpose(LoadFloat4x4(src)));
}
