#include "xdk/vectorintrinsics.h"

typedef struct Axes_8255DDE0 {
    char pad0[0x80];
    __vector4 forward; /* 0x80 */
    __vector4 up;      /* 0x90 */
} Axes_8255DDE0;

typedef struct Body_8255DDE0 {
    char pad0[0xa0];
    float speed;    /* 0xa0 */
    float minSpeed; /* 0xa4 */
    float floor;    /* 0xa8 */
    char padAC[0x1a4];
    Axes_8255DDE0 axes; /* 0x250 */
    char pad2F0[0x5cc];
    float scale; /* 0x8bc */
} Body_8255DDE0;

static __forceinline __vector4 Replicate(float s)
{
    return __vspltw(__lvlx(&s, 0), 0);
}

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

void fn_8255DDE0(Body_8255DDE0 *self, __vector4 *forward, __vector4 *up)
{
    float speed = Max(self->speed, Max(self->minSpeed, self->floor)) * self->scale;
    Axes_8255DDE0 *axes = &self->axes;

    if (forward != 0) {
        *forward = __vmulfp(axes->forward, Replicate(speed));
    }
    if (up != 0) {
        *up = __vmulfp(axes->up, Replicate(speed));
    }
}
