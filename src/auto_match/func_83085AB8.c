/* Eight unaligned unsigned shorts: out = float(words 4..7) - float(words 0..3). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vmrghh(__vector4 a, __vector4 b);
__vector4 __vmrglh(__vector4 a, __vector4 b);
__vector4 __vcfux(__vector4 v, int shift);
__vector4 __vsubfp(__vector4 a, __vector4 b);

void fn_83085AB8(const unsigned short *src, __vector4 *out)
{
    __vector4 zero, v, lo, hi;

    zero = __vxor(zero, zero);
    v = __vor(__lvlx(src, 0), __lvrx(src, 16));
    lo = __vcfux(__vmrghh(zero, v), 0);
    hi = __vcfux(__vmrglh(zero, v), 0);
    *out = __vsubfp(hi, lo);
}
