// Closest point to p on the outline of the XZ rectangle spanned by a and b (y = 0): the four
// corners are built, fn_82532658 gives the closest point on each edge, the nearest one wins.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);

__vector4 fn_82532658(__vector4 start, __vector4 end, __vector4 point);

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

__vector4 fn_823DD108(__vector4 a, __vector4 b, __vector4 p)
{
    __vector4 corners[4];
    __vector4 best;
    __vector4 d;
    __vector4 dot;
    float bestDistSq;
    float distSq;
    int i;

    corners[0] = VectorSet(a.vector4_f32[0], 0.0f, a.vector4_f32[2], 0.0f);
    corners[1] = VectorSet(a.vector4_f32[0], 0.0f, b.vector4_f32[2], 0.0f);
    corners[2] = VectorSet(b.vector4_f32[0], 0.0f, b.vector4_f32[2], 0.0f);
    corners[3] = VectorSet(b.vector4_f32[0], 0.0f, a.vector4_f32[2], 0.0f);

    best = fn_82532658(corners[3], corners[0], p);
    d = __vsubfp(p, best);
    dot = __vmsum3fp(d, d);
    bestDistSq = dot.vector4_f32[0];
    for (i = 1; i < 4; i++) {
        __vector4 c = fn_82532658(corners[i - 1], corners[i], p);
        d = __vsubfp(p, c);
        dot = __vmsum3fp(d, d);
        distSq = dot.vector4_f32[0];
        if (distSq < bestDistSq) {
            best = c;
            bestDistSq = distSq;
        }
    }
    return best;
}
