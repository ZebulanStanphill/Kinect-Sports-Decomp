/* D3DCOLOR (ARGB, by value) to a float vector: XMLoadColor in its unaligned-load form
   (lvsl permute of the two aligned words around the value), then the components rotated. */

#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_821CC0C0;     /* four -32896.5 (unpack offset) */
extern const __vector4 lbl_821CC0D0;     /* four 32896.5 (unpack scale) */

static __forceinline __vector4 LoadColor(const unsigned int *source)
{
    __vector4 lo, hi, permute, v;

    permute = __lvsl(source, 0);
    hi = *(const __vector4 *)((const char *)source + 3);
    lo = *(const __vector4 *)source;
    permute = __vsldoi(permute, permute, 1 << 2);
    v = __vperm(lo, hi, permute);
    v = __vupkd3d(v, 0);
    return __vmaddfp(lbl_821CC0D0, v, lbl_821CC0C0);
}

__vector4 fn_8254A820(unsigned int color)
{
    return __vpermwi(LoadColor(&color), 198);
}
