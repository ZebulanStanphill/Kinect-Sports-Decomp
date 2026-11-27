/* Returns the down or up unit vector (y = -1 when the point lies at or beyond x, else +1). */

#include "xdk/vectorintrinsics.h"

typedef struct Object_8226AC78 {
    char padding[0x1c];
    float x; /* 0x1c */
} Object_8226AC78;

void fn_8226AC78(__vector4 *out, Object_8226AC78 *object, const float *point)
{
    __vector4 direction = __VMXGetReg(77);

    direction.vector4_f32[1] = *point - object->x >= 0.0f ? -1.0f : 1.0f;
    *out = direction;
}
