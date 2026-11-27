#include "xdk/vectorintrinsics.h"

typedef struct Body_8256F418 {
    char pad0[8];
    float scale;                // 0x08
    char padc[4];
    __vector4 position;         // 0x10
    float radius;               // 0x20
} Body_8256F418;

typedef struct Plane_8256F418 {
    char pad0[0x80];
    __vector4 normal;           // 0x80
    char pad90[0x30];
    float distance;             // 0xc0
} Plane_8256F418;

extern float lbl_8326B558[28];
extern const float lbl_821CA45C[2];

static __forceinline __vector4 Replicate(const float *value)
{
    __vector4 v = __lvlx(value, 0);
    return __vspltw(v, 0);
}

static __forceinline float Dot3(__vector4 a, __vector4 b)
{
    __vector4 d = __vmsum3fp(a, b);
    return d.vector4_f32[0];
}

float fn_8256F418(Body_8256F418 *self, const Plane_8256F418 *plane)
{
    __vector4 normal = __vmulfp(plane->normal, Replicate(&self->scale));
    float d = Dot3(self->position, normal) - plane->distance;
    float margin = self->radius * lbl_8326B558[7];

    if (d - margin < 0.0f) {
        float push = margin - d;
        float result = lbl_8326B558[10];
        self->position = __vmaddfp(normal, Replicate(&push), self->position);
        return result;
    }
    return lbl_821CA45C[1];
}
