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

void fn_82D787C8(const __vector4 *a, const __vector4 *b, int i, int j, unsigned char *out)
{
    __vector4 zero = __vspltisw(0);
    __vector4 tb = *b;
    __vector4 ta = *a;
    int ma, mb;

    tb.vector4_f32[j] = 1.0f;
    ta.vector4_f32[i] = 1.0f;
    mb = GetMask(__vcmpgtfp(zero, tb));
    ma = GetMask(__vcmpgtfp(zero, ta));
    out[0] = (unsigned char)((ma << 4) | 0x10 | i);
    out[1] = (unsigned char)((((mb ^ 0xf) & 0xe) << 4) + j);
}
