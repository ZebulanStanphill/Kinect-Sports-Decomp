typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vctsxs(__vector4 v, int shift);


/* hkVector4Comparison::getMask(): one bit per component, x = 8 ... w = 1 */
static __forceinline int GetMask(__vector4 mask)
{
    const __vector4 one = {{1.0f, 1.0f, 1.0f, 1.0f}};
    const __vector4 weights = {{8.0f, 4.0f, 2.0f, 1.0f}};
    __vector4 t = __vand(mask, one);
    __vector4 sum = __vmsum4fp(t, weights);
    __vector4 bits = __vctsxs(sum, 0);
    return *(int *)&bits;
}

/* Sign bits of the vector's x, y, z (0x80, 0x40, 0x20) and of the scalar (0x08). */
unsigned short fn_82D78890(const __vector4 *v, float w)
{
    __vector4 zero = __vspltisw(0);
    int mask = GetMask(__vcmpgtfp(zero, *v));
    unsigned int wbits = *(unsigned int *)&w;
    return (unsigned short)(((mask << 4) & 0xe0) | ((wbits >> 28) & 8));
}
