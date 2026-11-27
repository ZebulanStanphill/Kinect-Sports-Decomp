#include "xdk/vectorintrinsics.h"

extern double fabs(double value);

typedef struct Session_82461C38 {
    char pad0[0xec];
    const float *bounds; /* 0xEC */
} Session_82461C38;

extern void *fn_8225F160(void);
extern int fn_8225F3C0(void *self);
extern Session_82461C38 *fn_8249ABC0(void);
extern __vector4 *fn_8249D008(__vector4 *out, const float *bounds, int side);
extern void fn_82461CE0(void *self, __vector4 extent);

static __forceinline __vector4 *Build_82461C38(__vector4 *out, const float *bounds)
{
    float extent = (float)fabs((bounds[1] - bounds[3]) * 0.5f + bounds[3]);
    *out = __vmulfp(__VMXGetReg(68), __vspltw(__lvlx(&extent, 0), 0));
    return out;
}

void fn_82461C38(void *self, int side, float *scale)
{
    int mode = fn_8225F3C0(fn_8225F160());
    const float *bounds = fn_8249ABC0()->bounds;
    __vector4 extent;
    __vector4 *result;

    *scale = 0.2f;
    if (mode < 2) {
        result = Build_82461C38(&extent, bounds);
    } else {
        result = fn_8249D008(&extent, bounds, side);
    }
    fn_82461CE0(self, *result);
}
