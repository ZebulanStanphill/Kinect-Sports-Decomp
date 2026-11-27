// Virtual getter: writes the constant vector (k, k, 0, 0), k = lbl_82192730[1], to *out.
// The vector is built the way XNA Math's XMVectorSet does on the VMX128 unit.
// The 0.0f literals are the game's LTCG-pooled zero: the unit needs the pool alias
// __real@00000000=ltcg_pool_0_0f (objects.json "pool_aliases").

#include "xdk/vectorintrinsics.h"

extern const float lbl_82192730[];

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx, vy, vz, vw;

    vx = __lvlx(&x, 0);
    vy = __lvlx(&y, 0);
    vz = __lvlx(&z, 0);
    vw = __lvlx(&w, 0);
    vy = __vrlimi(vy, vw, 0x4, 3);
    vx = __vrlimi(vx, vz, 0x4, 3);
    return __vrlimi(vx, vy, 0x3, 2);
}

void fn_8259EED0(void *self, __vector4 *out)
{
    *out = VectorSet(lbl_82192730[1], lbl_82192730[1], 0.0f, 0.0f);
}
