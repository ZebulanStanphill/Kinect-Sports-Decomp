/* Returns the up or down unit vector (y = -1 when value is not negative, else +1). */

#include "xdk/vectorintrinsics.h"

typedef struct Object_8226AA50 {
    char padding[0x24];
    float value; /* 0x24 */
} Object_8226AA50;

void fn_8226AA50(__vector4 *out, Object_8226AA50 *object)
{
    __vector4 direction = __VMXGetReg(77);

    direction.vector4_f32[1] = object->value >= 0.0f ? -1.0f : 1.0f;
    *out = direction;
}
