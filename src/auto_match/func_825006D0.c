// Segment (a -> b) against the object's plane (normal at +0x40, distance at +0x70): on a hit
// within the segment, stores the hit point, the hit time and a hit flag and returns 0;
// otherwise accumulates the step time and returns 1.

#include "xdk/vectorintrinsics.h"

typedef struct Tracer_825006D0 {
    __vector4 hitPoint;      // 0x00
    float hitTime;           // 0x10
    char pad14[0xc];
    int hit;                 // 0x20
    char pad24[0x1c];
    __vector4 normal;        // 0x40
    char pad50[0x20];
    float distance;          // 0x70
    char pad74[0xc];
    float time;              // 0x80
} Tracer_825006D0;

extern float lbl_821CA45C[];
extern const float ltcg_pool_0_0f;

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

int fn_825006D0(Tracer_825006D0 *self, __vector4 a, __vector4 b, float step)
{
    __vector4 dir;
    __vector4 startDot;
    __vector4 dirDot;
    float t;

    dir = __vsubfp(b, a);
    startDot = __vmsum3fp(self->normal, a);
    dirDot = __vmsum3fp(self->normal, dir);
    t = -((self->distance + startDot.vector4_f32[0]) / dirDot.vector4_f32[0]);
    if (t >= ltcg_pool_0_0f && t <= lbl_821CA45C[1]) {
        self->hitTime = t * step + self->time;
        self->hit = 1;
        self->hitPoint = __vmaddfp(dir, Replicate(t), a);
        return 0;
    }
    self->time = self->time + step;
    return 1;
}
