// Loads an unaligned 4-float vector from src, transforms it with fn_822BD390 and stores the
// result unaligned to dst.

#include "xdk/vectorintrinsics.h"

typedef struct Float4_8280A7E8 {
    float x, y, z, w;
} Float4_8280A7E8;

extern __vector4 fn_822BD390(__vector4 v);

static __forceinline __vector4 LoadFloat4(const Float4_8280A7E8 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 16);
    return __vor(vl, vr);
}

static __forceinline void StoreFloat4(Float4_8280A7E8 *dst, __vector4 v)
{
    __stvlx(v, dst, 0);
    __stvrx(v, dst, 16);
}

void fn_8280A7E8(const Float4_8280A7E8 *src, Float4_8280A7E8 *dst)
{
    StoreFloat4(dst, fn_822BD390(LoadFloat4(src)));
}
