// Sines and cosines of two angles: out = sin((x, y, x, y) + (0, 0, pi/2, pi/2)), with the
// vector sine fn_822BD390. lbl_83156DD0[0] is the phase vector.

#include "xdk/vectorintrinsics.h"

typedef struct Float4_8280A888 {
    float x, y, z, w;
} Float4_8280A888;

extern __vector4 lbl_83156DD0[2];
__vector4 fn_822BD390(__vector4 angles);

static __forceinline __vector4 LoadFloat4(const Float4_8280A888 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 16);
    return __vor(vl, vr);
}

static __forceinline void StoreFloat4(Float4_8280A888 *dst, __vector4 v)
{
    __stvlx(v, dst, 0);
    __stvrx(v, dst, 16);
}

void fn_8280A888(const Float4_8280A888 *angles, Float4_8280A888 *out)
{
    __vector4 v;

    v = LoadFloat4(angles);
    v = __vpermwi(v, 0x11);
    v = __vaddfp(v, lbl_83156DD0[0]);
    StoreFloat4(out, fn_822BD390(v));
}
