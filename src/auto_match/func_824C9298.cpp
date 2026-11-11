// Height (y) of the point of a polyline that is closest to a position: starts from the first
// vertex and tests the closest point of every segment (fn_82532658).
// Matches (100%) only under link-time code generation with fn_82532658 (work/func_82532658.c, itself
// 100% at /O1 /QVMXReserve): the position (v11), the best point (v28) and r7-r9 stay live across the
// call, and the callee uses v29-v31 without saving them. Needs the real std::vector (operator[] and
// size()) for the original's dead `mr r8, r9` copy of the begin pointer.
#include <vector>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
// Closest point to `point` on the segment a -> b.
__vector4 fn_82532658(__vector4 a, __vector4 b, __vector4 point);
}

struct Path_824C9298 {
    char pad00[0x20];
    std::vector<__vector4> points;  // 0x20
};

static __forceinline float LengthSq3(__vector4 v)
{
    __vector4 d = __vmsum3fp(v, v);
    return d.vector4_f32[0];
}

extern "C" float fn_824C9298(Path_824C9298 *self, __vector4 point)
{
    __vector4 best = self->points[0];
    unsigned int count = self->points.size();

    for (unsigned int i = 1; i < count; i++) {
        __vector4 candidate = fn_82532658(self->points[i - 1], self->points[i], point);

        if (LengthSq3(__vsubfp(point, candidate)) < LengthSq3(__vsubfp(point, best))) {
            best = candidate;
        }
    }
    return best.vector4_f32[1];
}
