#include "xdk/vectorintrinsics.h"

typedef struct Bounds_822B33B0 {
    float pad0[4];
    float first[4];
    float pad1[4];
    float second[4];
} Bounds_822B33B0;

static __forceinline int contains(float first, float second, __vector4 point, float margin, int component)
{
    if (first <= second) {
        return point.vector4_f32[component] >= first - margin &&
               point.vector4_f32[component] < second + margin;
    }
    return point.vector4_f32[component] >= second - margin && point.vector4_f32[component] < first + margin;
}

unsigned char fn_822B33B0(Bounds_822B33B0 *self, __vector4 point, float margin)
{
    unsigned char x = contains(self->first[0], self->second[0], point, margin, 0) != 0;
    int z = contains(self->first[2], self->second[2], point, margin, 2);
    return x && z;
}
