// Closest point to `position` on the (infinite) edge lines of a quad: corners are path[1..4].
// Stores the index of the closest edge (4 when none is closer than FLT_MAX) and the point.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Closest_822B2EA8 {
    int edge;           /* 0x00 */
    __vector4 point;    /* 0x10 */
} Closest_822B2EA8;

typedef struct Quad_822B2EA8 {
    __vector4 pad0;
    __vector4 corner[4];    /* 0x10 */
} Quad_822B2EA8;

extern const float lbl_821954B0[];   /* LTCG float pool; [32] is FLT_MAX */

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

void fn_822B2EA8(Closest_822B2EA8 *out, const Quad_822B2EA8 *quad, __vector4 position)
{
    float best = lbl_821954B0[32];
    __vector4 bestPoint = position;
    int bestEdge = 4;
    unsigned int i;

    for (i = 0; i < 4; i++) {
        unsigned int next = i + 1 != 4 ? i + 1 : 0;
        __vector4 a = quad->corner[i];
        __vector4 toPosition = __vsubfp(position, a);
        __vector4 direction = Normalize3(__vsubfp(quad->corner[next], a));
        __vector4 dot = __vmsum3fp(toPosition, direction);
        float t = dot.vector4_f32[0];
        __vector4 point = __vmaddfp(direction, __vspltw(__lvlx(&t, 0), 0), a);
        __vector4 offset = __vsubfp(point, position);
        __vector4 distanceSq = __vmsum3fp(offset, offset);

        if (distanceSq.vector4_f32[0] < best) {
            bestPoint = point;
            best = distanceSq.vector4_f32[0];
            bestEdge = i;
        }
    }
    out->edge = bestEdge;
    out->point = bestPoint;
}
