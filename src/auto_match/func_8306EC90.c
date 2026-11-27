#include "xdk/vectorintrinsics.h"

__vector4 fn_8306EC90(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}
