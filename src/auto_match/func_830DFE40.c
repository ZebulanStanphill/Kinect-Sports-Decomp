// Video decoder: 8-row horizontal halfword filter (3*s + a + rounding) >> 4, s = row shifted by one sample.
// Callers pass r5 (unused here) and the rounding vector in v1.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltish(int value);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vaddshs(__vector4 a, __vector4 b);
__vector4 __vslh(__vector4 a, __vector4 b);
__vector4 __vsrah(__vector4 a, __vector4 b);

void fn_830DFE40(const __vector4 *src, __vector4 *dst, int unused, __vector4 rounding)
{
    __vector4 one = __vspltish(1);
    __vector4 four = __vspltish(4);
    __vector4 a[8], s[8];
    int i;

    for (i = 0; i < 8; i++) {
        a[i] = src[i * 3];
        s[i] = __vsldoi(a[i], src[i * 3 + 1], 2);
    }
    for (i = 0; i < 8; i++) {
        dst[i * 3] = __vsrah(__vaddshs(__vaddshs(__vaddshs(__vslh(s[i], one), a[i]), s[i]), rounding), four);
    }
}
