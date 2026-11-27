// Separates a body from the other body of its pair: along the normalised direction between them,
// fn_82455E58 is applied with +scale to the other body and -scale to this one; the offset is reset.

#include "xdk/vectorintrinsics.h"

typedef struct Body_82455D40 {
    char pad0[0x2c];
    int id;                  /* 0x2c */
    char pad30[0x50];
    __vector4 position;      /* 0x80 */
} Body_82455D40;

typedef struct Pair_82455D40 Pair_82455D40;
typedef struct PairVtbl_82455D40 {
    void *slot0;
    void *slot1;
    void *slot2;
    Body_82455D40 *(*GetOther)(Pair_82455D40 *self, Body_82455D40 *body);
} PairVtbl_82455D40;
struct Pair_82455D40 {
    const PairVtbl_82455D40 *vt;
};

typedef struct Separator_82455D40 {
    char pad0[0x10];
    __vector4 offset;        /* 0x10 */
    float scale;             /* 0x20 */
    Pair_82455D40 *pair;     /* 0x24 */
} Separator_82455D40;

void fn_82455E58(Separator_82455D40 *self, int id, __vector4 v);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline __vector4 Normalize3(__vector4 v)
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
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

void fn_82455D40(Separator_82455D40 *self, Body_82455D40 *body)
{
    Body_82455D40 *other = self->pair->vt->GetOther(self->pair, body);
    float neg = -self->scale;
    __vector4 zeroA = __VMXGetReg(77);
    __vector4 zeroB = __VMXGetReg(77);
    __vector4 dir = Normalize3(__vsubfp(other->position, body->position));

    other = self->pair->vt->GetOther(self->pair, body);
    fn_82455E58(self, other->id, __vmaddfp(dir, Replicate(self->scale), zeroA));
    fn_82455E58(self, body->id, __vmaddfp(dir, Replicate(neg), zeroB));
    self->offset = __VMXGetReg(77);
}
