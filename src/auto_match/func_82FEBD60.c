#include "xdk/vectorintrinsics.h"

void fn_82FEBD60(__vector4 *out, const __vector4 *input, float scale)
{
    __vector4 factor = __vspltw(__lvlx(&scale, 0), 0);
    __vector4 first = __vmulfp(input[0], factor);
    __vector4 second = __vmulfp(input[1], factor);
    out[0] = first;
    out[1] = second;
}
