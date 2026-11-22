/* Unpacks an unsigned 9-bit float (3-bit exponent, 6-bit mantissa) from a bit buffer. */
typedef union Bits_822395B8 {
    unsigned __int64 u;
    double d;
} Bits_822395B8;

extern unsigned __int64 fn_8223A9E0(void *buf, int offset, int width);

float fn_822395B8(void *buf)
{
    __int64 exponent;
    unsigned __int64 mantissa;
    double value;

    exponent = fn_8223A9E0(buf, 0, 3);
    mantissa = fn_8223A9E0(buf, 3, 6);
    if (exponent == 0) {
        if (mantissa == 0) {
            value = 0.0;
            goto done;
        }
        mantissa <<= 46;
        exponent = 0x3fd;
        while ((mantissa & 0xfff0000000000000ULL) == 0) {
            mantissa <<= 1;
            exponent--;
        }
        mantissa &= 0xfffffffffffffULL;
    } else {
        exponent += 0x3fc;
        mantissa <<= 46;
    }
    {
        Bits_822395B8 bits;

        bits.u = ((unsigned __int64)exponent << 52) | mantissa;
        value = bits.d;
    }
done:
    return (float)value;
}
