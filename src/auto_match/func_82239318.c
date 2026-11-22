/* Unpacks an unsigned 14-bit float (4-bit exponent, 10-bit mantissa) from a bit buffer. */
typedef union Bits_82239318 {
    unsigned __int64 u;
    double d;
} Bits_82239318;

extern unsigned __int64 fn_8223A9E0(void *buf, int offset, int width);

float fn_82239318(void *buf)
{
    __int64 exponent;
    unsigned __int64 mantissa;
    double value;

    exponent = fn_8223A9E0(buf, 0, 4);
    mantissa = fn_8223A9E0(buf, 4, 10);
    if (exponent == 0) {
        if (mantissa == 0) {
            value = 0.0;
            goto done;
        }
        mantissa <<= 42;
        exponent = 0x3f9;
        while ((mantissa & 0xfff0000000000000ULL) == 0) {
            mantissa <<= 1;
            exponent--;
        }
        mantissa &= 0xfffffffffffffULL;
    } else {
        exponent += 0x3f8;
        mantissa <<= 42;
    }
    {
        Bits_82239318 bits;

        bits.u = ((unsigned __int64)exponent << 52) | mantissa;
        value = bits.d;
    }
done:
    return (float)value;
}
