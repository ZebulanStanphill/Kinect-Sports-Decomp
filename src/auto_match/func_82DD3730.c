#include "xdk/vectorintrinsics.h"

void fn_82DD3730(__vector4 *distance, const __vector4 *a, const __vector4 *b, const __vector4 *normal,
                 __vector4 *normalOut)
{
    __vector4 diff = __vsubfp(*a, *b);
    __vector4 n = *normal;

    *normalOut = n;
    *distance = __vmsum3fp(n, diff);
}
