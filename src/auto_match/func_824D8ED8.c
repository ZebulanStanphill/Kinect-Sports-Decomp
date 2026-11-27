#include "xdk/vectorintrinsics.h"

typedef struct Levels_824D8ED8 {
    char pad0[8];
    float limits[3];            // 0x08
    char pad14[0x10];
} Levels_824D8ED8;

typedef struct Config_824D8ED8 {
    char pad0[0x10c];
    Levels_824D8ED8 a;          // 0x10c
    Levels_824D8ED8 b;          // 0x130
    char pad154[8];
} Config_824D8ED8;

typedef struct Owner_824D8ED8 {
    char pad0[0x6c];
    int mode;                   // 0x6c
} Owner_824D8ED8;

extern Config_824D8ED8 lbl_831C3E30;

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

int fn_824D8ED8(Owner_824D8ED8 *self, __vector4 v)
{
    const Levels_824D8ED8 *levels;
    __vector4 length;
    int i;
    int result;
    levels = self->mode != 0 ? &lbl_831C3E30.a : &lbl_831C3E30.b;
    result = 1;
    length = Length3(v);
    for (i = 0; i < 3; i++) {
        if (length.vector4_f32[0] < levels->limits[i] || i == 2) {
            result = i;
            break;
        }
    }
    return result;
}
