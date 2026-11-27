// out = (a * b < 0) as a per-component mask.

#include "xdk/vectorintrinsics.h"

void fn_82DCC6B0(__vector4 *out, const __vector4 *a, const __vector4 *b)
{
    *out = __vcmpgtfp(__vspltisw(0), __vmulfp(*a, *b));
}
