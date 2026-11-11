// Loads an unaligned float4, runs it through the vector function fn_8280AB70 and stores the
// result to an unaligned float4.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vor(__vector4 a, __vector4 b);
void __stvlx(__vector4 v, void *base, int offset);
void __stvrx(__vector4 v, void *base, int offset);

typedef struct Float4_8280A838 {
    float x, y, z, w;
} Float4_8280A838;

extern __vector4 fn_8280AB70(__vector4 v);

static __forceinline __vector4 LoadFloat4(const Float4_8280A838 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 16);
    return __vor(vl, vr);
}

static __forceinline void StoreFloat4(Float4_8280A838 *dst, __vector4 v)
{
    __stvlx(v, dst, 0);
    __stvrx(v, dst, 16);
}

void fn_8280A838(const Float4_8280A838 *src, Float4_8280A838 *dst)
{
    StoreFloat4(dst, fn_8280AB70(LoadFloat4(src)));
}
