/* Eight unaligned unsigned shorts: out = float(words 4..7) - float(words 0..3). */

#include "xdk/vectorintrinsics.h"

void fn_83085AB8(const unsigned short *src, __vector4 *out)
{
    __vector4 zero, v, lo, hi;

    zero = __vxor(zero, zero);
    v = __vor(__lvlx(src, 0), __lvrx(src, 16));
    lo = __vcfux(__vmrghh(zero, v), 0);
    hi = __vcfux(__vmrglh(zero, v), 0);
    *out = __vsubfp(hi, lo);
}
