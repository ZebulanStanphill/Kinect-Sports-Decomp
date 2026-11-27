#include "xdk/vectorintrinsics.h"

typedef struct Volume_82322080 {
    char data[0x30];
} Volume_82322080;

typedef struct Obj_82322080 {
    char pad[0x10];
    Volume_82322080 inner; /* 0x10 */
    Volume_82322080 outer; /* 0x40 */
} Obj_82322080;

extern int fn_82331DB8(Volume_82322080 *volume, void *target, __vector4 a, __vector4 b);

/* The region code for a mode: one value when the flag is set, another when it is not. */
static __forceinline int Region(unsigned int mode, unsigned int flag)
{
    switch (mode) {
    case 0:
        return flag ? 0 : 3;
    case 1:
        return flag ? 2 : 5;
    case 2:
        return flag ? 1 : 4;
    case 3:
        return 6;
    }
    return 7;
}

int fn_82322080(Obj_82322080 *self, void *target, unsigned int mode, unsigned int flag, __vector4 a,
                __vector4 b)
{
    int inner;
    int outer;

    inner = fn_82331DB8(&self->inner, target, a, b);
    outer = fn_82331DB8(&self->outer, target, a, b);
    if (inner == 0 && outer == 0) {
        return 7;
    }
    return Region(mode, flag);
}
