// Quaternion product written with sign-flipped copies and four 4-component dot products:
// b is conjugated, a's components negated per row, then the dots merged as (d, b, c, a).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);

static __forceinline __vector4 Negate(__vector4 v)
{
    __vector4 sign = __vspltisw(-1);
    sign = __vslw(sign, sign);
    return __vxor(v, sign);
}

__vector4 fn_83076368(__vector4 a, __vector4 b)
{
    __vector4 na, nb, r0, r1, r2, r3, d0, d1, d2, d3;

    nb = Negate(b);
    na = Negate(a);
    nb = __vrlimi(nb, b, 1, 0);
    r0 = __vrlimi(na, a, 1, 0);
    r1 = __vrlimi(na, a, 0xd, 0);
    r2 = __vrlimi(na, a, 7, 0);
    r3 = __vrlimi(na, a, 0xb, 0);
    d0 = __vmsum4fp(r0, nb);
    d1 = __vmsum4fp(r1, __vpermwi(nb, 177));
    d2 = __vmsum4fp(r2, __vpermwi(nb, 78));
    d3 = __vmsum4fp(r3, __vpermwi(nb, 228));
    return __vmrghw(__vmrghw(d3, d2), __vmrghw(d1, d0));
}
