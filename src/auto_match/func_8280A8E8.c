// Unaligned float4 in; out1 = fn_822BD390(v), out2 = fn_8280AB70(v) (vector sine and cosine).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
void __stvlx(__vector4 v, void *base, int offset);
void __stvrx(__vector4 v, void *base, int offset);
__vector4 __vor(__vector4 a, __vector4 b);

typedef struct Float4_8280A8E8 {
    float x, y, z, w;
} Float4_8280A8E8;

__vector4 fn_822BD390(__vector4 v);
__vector4 fn_8280AB70(__vector4 v);

static __forceinline __vector4 LoadFloat4(const Float4_8280A8E8 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 16);
    return __vor(vl, vr);
}

static __forceinline void StoreFloat4(Float4_8280A8E8 *dst, __vector4 v)
{
    __stvlx(v, dst, 0);
    __stvrx(v, dst, 16);
}

void fn_8280A8E8(const Float4_8280A8E8 *in, Float4_8280A8E8 *out1, Float4_8280A8E8 *out2)
{
    __vector4 v;
    __vector4 a;
    __vector4 b;

    v = LoadFloat4(in);
    a = fn_822BD390(v);
    b = fn_8280AB70(v);
    StoreFloat4(out1, a);
    StoreFloat4(out2, b);
}
