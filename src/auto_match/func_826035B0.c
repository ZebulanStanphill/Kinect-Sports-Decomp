#include "xdk/vectorintrinsics.h"

typedef struct Transform_826035B0 {
    __vector4 col[4];           // 0x00 rotation columns, translation at col[3]
} Transform_826035B0;

typedef struct Aabb_826035B0 {
    __vector4 min;              // 0x00
    __vector4 max;              // 0x10
} Aabb_826035B0;

extern const __vector4 lbl_821CA820;    /* abs mask */
extern const __vector4 lbl_8209AB20;    /* sign mask */

void fn_826035B0(const Transform_826035B0 *t, const __vector4 *halfExtents, float radius, Aabb_826035B0 *out)
{
    __vector4 h = *halfExtents;
    __vector4 c0, c1, c2, ext, r;

    c0 = __vmulfp(__vspltw(h, 0), t->col[0]);
    c1 = __vmulfp(__vspltw(h, 1), t->col[1]);
    c2 = __vmulfp(__vspltw(h, 2), t->col[2]);
    r.vector4_f32[0] = radius;
    r = __vspltw(r, 0);
    c0 = __vand(c0, lbl_821CA820);
    c1 = __vand(c1, lbl_821CA820);
    c2 = __vand(c2, lbl_821CA820);
    ext = __vaddfp(c0, c1);
    c2 = __vaddfp(c2, r);
    ext = __vaddfp(ext, c2);
    {
        __vector4 pos = t->col[3];
        __vector4 mx = __vaddfp(ext, pos);
        __vector4 mn = __vaddfp(__vxor(ext, lbl_8209AB20), pos);
        out->max = mx;
        out->min = mn;
    }
}
