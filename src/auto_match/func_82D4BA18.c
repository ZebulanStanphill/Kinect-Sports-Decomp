// Havok: clips the query box against the object's own box (origin at +0x20, extent
// 16777216 / scale on every axis) and runs the tree query (fn_82DCB000) over the clipped box.

#include "xdk/vectorintrinsics.h"

typedef struct Aabb_82D4BA18 {
    __vector4 min;
    __vector4 max;
} Aabb_82D4BA18;

typedef struct Query_82D4BA18 {
    char data[0x40];
} Query_82D4BA18;

typedef struct Obj_82D4BA18 {
    char pad00[0x14];
    void *tree;             // 0x14
    char pad18[8];
    __vector4 origin;       // 0x20, w = scale
} Obj_82D4BA18;

void fn_82DCB000(Query_82D4BA18 *query, void *tree, const Aabb_82D4BA18 *aabb, void *out);

static __forceinline void SetAll(__vector4 *self, float x)
{
    self->vector4_f32[0] = x;
    *self = __vspltw(*self, 0);
}

void fn_82D4BA18(Obj_82D4BA18 *self, const Aabb_82D4BA18 *aabb, void *out)
{
    Aabb_82D4BA18 clipped;
    Query_82D4BA18 query;
    __vector4 ext;
    __vector4 mx;
    const __vector4 *origin = &self->origin;

    SetAll(&ext, 16777216.0f / origin->vector4_f32[3]);
    mx = __vaddfp(*origin, ext);
    clipped.min = __vmaxfp(*origin, aabb->min);
    clipped.max = __vminfp(mx, aabb->max);
    fn_82DCB000(&query, self->tree, &clipped, out);
}
