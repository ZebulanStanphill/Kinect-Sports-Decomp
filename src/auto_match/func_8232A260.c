extern void fn_8232A928(void *bits, unsigned __int64 sign);
extern void fn_8232A988(void *bits, unsigned __int64 value, unsigned __int64 offset, unsigned __int64 count);

typedef union DoubleBits_8232A260 {
    double d;
    unsigned __int64 u;
} DoubleBits_8232A260;

static __forceinline unsigned __int64 SignOf(double value)
{
    DoubleBits_8232A260 v;

    v.d = value;
    return v.u >> 63;
}

static __forceinline unsigned __int64 MantissaOf(double value)
{
    DoubleBits_8232A260 v;

    v.d = value;
    return v.u & 0xfffffffffffffULL;
}

static __forceinline __int64 ExponentOf(double value)
{
    DoubleBits_8232A260 v;

    v.d = value;
    return (v.u >> 52) & 0x7ff;
}

void *fn_8232A260(void *bits, double value)
{
    unsigned __int64 sign = SignOf(value);
    unsigned __int64 mantissa = MantissaOf(value);
    __int64 exponent = ExponentOf(value);
    unsigned __int64 shift;

    if (exponent == 0) {
        /* zero and denormal: both written as a signed zero (the compare stays in the code) */
        if (mantissa == 0) {
            fn_8232A928(bits, sign);
        } else {
            fn_8232A928(bits, sign);
        }
    } else {
        exponent -= 0x380;
        if (exponent <= 0) {
            shift = -exponent;
            if (shift >= 0x40) {
                fn_8232A928(bits, sign);
                return bits;
            }
            fn_8232A988(bits, sign, 0, 1);
            fn_8232A988(bits, 0, 1, 8);
            mantissa = ((mantissa | 0x10000000000000ULL) >> (shift + 1)) >> 28;
        } else if ((unsigned __int64)exponent > 0xff) {
            fn_8232A988(bits, sign, 0, 1);
            fn_8232A988(bits, 0xff, 1, 8);
            mantissa = 0xffffff;
        } else {
            fn_8232A988(bits, sign, 0, 1);
            fn_8232A988(bits, exponent, 1, 8);
            mantissa >>= 28;
        }
        fn_8232A988(bits, mantissa, 9, 0x18);
    }
    return bits;
}
