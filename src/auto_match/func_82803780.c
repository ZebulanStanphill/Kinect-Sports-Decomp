#include "xdk/vectorintrinsics.h"

__vector4 fn_82803780(__vector4 x, __vector4 y, __vector4 z, __vector4 w,
                      __vector4 r0, __vector4 r1, __vector4 r2, __vector4 r3)
{
    __vector4 v = __vmulfp(r0, x);
    v = __vmaddfp(r1, y, v);
    v = __vmaddfp(r2, z, v);
    return __vmaddfp(r3, w, v);
}
