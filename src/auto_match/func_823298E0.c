/* Reads a 33-bit packed float (sign, 8-bit exponent, 24-bit mantissa) from a bit reader,
   unpacks the fields through a byte buffer and rebuilds the value as a double. */
void *memset(void *dest, int value, unsigned int size);

typedef struct BitBuf_823298E0 {
    unsigned char bytes[5];
} BitBuf_823298E0;

typedef union Bits_823298E0 {
    unsigned __int64 u;
    double d;
} Bits_823298E0;

extern unsigned __int64 fn_823B4900(void *reader, int bits, int a, int b);
extern void fn_8232A988(BitBuf_823298E0 *buf, unsigned __int64 value, int offset, int width);
extern unsigned __int64 fn_8223A9E0(BitBuf_823298E0 *buf, int offset, int width);

void fn_823298E0(void *self, void *reader, float *out)
{
    unsigned __int64 packed;
    __int64 sign;
    __int64 exponent;
    unsigned __int64 mantissa;
    double value;

    packed = fn_823B4900(reader, 0x21, 0, 0);
    {
        BitBuf_823298E0 buf;

        memset(&buf, 0, sizeof(buf));
        fn_8232A988(&buf, (packed >> 32) & 1, 0, 1);
        fn_8232A988(&buf, (packed >> 24) & 0xff, 1, 8);
        fn_8232A988(&buf, packed & 0xffffff, 9, 0x18);
        sign = fn_8223A9E0(&buf, 0, 1);
        exponent = fn_8223A9E0(&buf, 1, 8);
        mantissa = fn_8223A9E0(&buf, 9, 0x18);
    }
    if (exponent == 0) {
        if (mantissa == 0) {
            value = -0.0;
            goto done;
        }
        mantissa <<= 28;
        exponent = 0x381;
        while ((mantissa & 0xfff0000000000000ULL) == 0) {
            mantissa <<= 1;
            exponent--;
        }
        mantissa &= 0xfffffffffffffULL;
    } else {
        exponent += 0x380;
        mantissa <<= 28;
    }
    {
        Bits_823298E0 bits;

        bits.u = (((unsigned __int64)sign << 11 | (unsigned __int64)exponent) << 52) | mantissa;
        value = bits.d;
    }
done:
    if (out != 0) {
        *out = (float)value;
    }
}
