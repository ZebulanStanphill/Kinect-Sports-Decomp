#include "xdk/vectorintrinsics.h"

__vector4 fn_824AB3D0(__vector4 a, __vector4 b)
{
    if (a.vector4_f32[1] > b.vector4_f32[1])
        return a;
    return b;
}
