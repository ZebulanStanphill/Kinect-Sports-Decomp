/* 80-bit long double image: exponent and sign word, then the 64-bit mantissa */
typedef struct LongDouble_82F867A8 {
    unsigned char bytes[10];
} LongDouble_82F867A8;

#define LD_EXPONENT(p) (*(unsigned short *)((p)->bytes + 0))
#define LD_MANTISSA_HI(p) (*(unsigned int *)((p)->bytes + 2))
#define LD_MANTISSA_LO(p) (*(unsigned int *)((p)->bytes + 6))

/* Converts a double to the 80-bit long double layout. */
void fn_82F867A8(LongDouble_82F867A8 *dest, const double *in)
{
    LongDouble_82F867A8 *ld = dest;
    unsigned short exponent;
    unsigned short sign;
    unsigned int hi;
    unsigned int lo;
    unsigned int integerBit;

    integerBit = 0x80000000;
    exponent = (*(unsigned short *)in >> 4) & 0x7ff;
    sign = *(unsigned short *)in & 0x8000;
    hi = *(unsigned int *)in & 0xfffff;
    lo = ((unsigned int *)in)[1];
    switch (exponent) {
    case 0:
        if (hi == 0 && lo == 0) {
            LD_EXPONENT(ld) = sign;
            LD_MANTISSA_HI(ld) = 0;
            LD_MANTISSA_LO(ld) = 0;
            return;
        }
        exponent = exponent + 0x3c01;
        integerBit = 0;
        break;
    case 0x7ff:
        exponent = 0x7fff;
        break;
    default:
        exponent = exponent + 0x3c00;
        break;
    }
    LD_MANTISSA_LO(ld) = lo << 11;
    LD_MANTISSA_HI(ld) = (lo >> 21) | (hi << 11) | integerBit;
    while ((LD_MANTISSA_HI(ld) & 0x80000000) == 0) {
        lo = LD_MANTISSA_LO(ld);
        hi = LD_MANTISSA_HI(ld);
        LD_MANTISSA_LO(ld) = lo << 1;
        LD_MANTISSA_HI(ld) = (lo >> 31) | (hi << 1);
        exponent--;
    }
    LD_EXPONENT(ld) = sign | exponent;
}
