/* Reads an unsigned 8-bit packed float (3-bit exponent, 5-bit mantissa) from a bit reader,
   unpacks the fields through a byte buffer and rebuilds the value as a double. */
void *memset(void *dest, int value, unsigned int size);

typedef struct BitBuf_82429BA8 {
    unsigned char bytes[1];
} BitBuf_82429BA8;

typedef union Bits_82429BA8 {
    unsigned __int64 u;
    double d;
} Bits_82429BA8;

extern unsigned __int64 fn_823B4900(void *reader, int bits, int a, int b);
extern void fn_8232A988(BitBuf_82429BA8 *buf, unsigned __int64 value, int offset, int width);
extern unsigned __int64 fn_8223A9E0(BitBuf_82429BA8 *buf, int offset, int width);

void fn_82429BA8(void *self, void *reader, float *out)
{
    unsigned __int64 packed;
    __int64 exponent;
    unsigned __int64 mantissa;
    double value;

    packed = fn_823B4900(reader, 8, 0, 0);
    {
        BitBuf_82429BA8 buf;

        memset(&buf, 0, sizeof(buf));
        fn_8232A988(&buf, (packed >> 5) & 7, 0, 3);
        fn_8232A988(&buf, packed & 0x1f, 3, 5);
        exponent = fn_8223A9E0(&buf, 0, 3);
        mantissa = fn_8223A9E0(&buf, 3, 5);
    }
    if (exponent == 0) {
        if (mantissa == 0) {
            value = 0.0;
            goto done;
        }
        mantissa <<= 47;
        exponent = 0x3fd;
        while ((mantissa & 0xfff0000000000000ULL) == 0) {
            mantissa <<= 1;
            exponent--;
        }
        mantissa &= 0xfffffffffffffULL;
    } else {
        exponent += 0x3fc;
        mantissa <<= 47;
    }
    {
        Bits_82429BA8 bits;

        bits.u = ((unsigned __int64)exponent << 52) | mantissa;
        value = bits.d;
    }
done:
    if (out != 0) {
        *out = (float)value;
    }
}
