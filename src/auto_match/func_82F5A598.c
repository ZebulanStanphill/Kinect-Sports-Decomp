#include "xdk/vectorintrinsics.h"

extern __vector4 fn_82F53548(__vector4 direction);
extern float fn_82F534A0(__vector4 first, __vector4 second);
extern float fn_8306E888(float value);

unsigned char fn_82F5A598(__vector4 normal, __vector4 point, float limit)
{
    __vector4 direction = point;
    direction.vector4_f32[3] = 0.0f;
    return fn_8306E888(fn_82F534A0(normal, fn_82F53548(direction)) + point.vector4_f32[3]) < limit;
}
