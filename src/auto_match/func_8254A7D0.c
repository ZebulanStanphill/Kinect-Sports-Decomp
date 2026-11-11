/* D3DCOLOR (ARGB, by value) to a float vector, stored to *result: XMLoadColor in its unaligned-load form
   (lvsl permute of the two aligned words around the value), then the components rotated. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvsl(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vperm(__vector4 a, __vector4 b, __vector4 control);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);

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

void fn_8254A7D0(unsigned int color, __vector4 *result)
{
    *result = __vpermwi(LoadColor(&color), 198);
}
