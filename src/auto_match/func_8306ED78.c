

/* Cross product: a.yzx * b.zxy - a.zxy * b.yzx. */

#include "xdk/vectorintrinsics.h"

__vector4 fn_8306ED78(__vector4 a, __vector4 b)
{
    return __vnmsubfp(__vpermwi(a, 135), __vpermwi(b, 99), __vmulfp(__vpermwi(a, 99), __vpermwi(b, 135)));
}
