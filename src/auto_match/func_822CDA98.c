// Runs the base reset (fn_822B6858), then sets the vector at +0xa0 to (0, -0.025, 0, 0)
// (XNA Math XMVectorSet shape: four lvlx loads merged with vrlimi).

#include "xdk/vectorintrinsics.h"

typedef struct Obj_822CDA98 {
    char pad[0xa0];
    __vector4 offset;   // 0xa0
} Obj_822CDA98;

extern const float ltcg_pool_0_0f;
extern const float lbl_821954B0[];

void fn_822B6858(Obj_822CDA98 *self);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);

    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

void fn_822CDA98(Obj_822CDA98 *self)
{
    fn_822B6858(self);
    self->offset = VectorSet(ltcg_pool_0_0f, lbl_821954B0[0x269], ltcg_pool_0_0f, ltcg_pool_0_0f);
}
