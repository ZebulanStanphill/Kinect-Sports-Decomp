#include "xdk/vectorintrinsics.h"

void fn_82D8E7F8(char *self, float size)
{
    __vector4 *minimum = (__vector4 *)(self + 0x30);
    __vector4 *maximum = (__vector4 *)(self + 0x40);
    minimum->vector4_f32[0] = size * -0.5f;
    *minimum = __vspltw(*minimum, 0);
    maximum->vector4_f32[0] = size * 0.5f;
    *maximum = __vspltw(*maximum, 0);
}
