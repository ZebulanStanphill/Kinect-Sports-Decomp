#include <math.h>
#include "xdk/vectorintrinsics.h"

__vector4 fn_824AA980(__vector4 a, __vector4 b)
{
    if (fabs(a.vector4_f32[0]) > fabs(b.vector4_f32[0]))
        return a;
    return b;
}
