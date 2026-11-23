/* Reads a direction and a 6-bit packed scale (3-bit exponent, 3-bit mantissa) from a bit reader
   and returns the scaled direction. v77 is the game's reserved zero vector (/QVMXReserve). */
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float f[4];
    unsigned int u[4];
} __vector4;

__vector4 __VMXGetReg(int n);
void *memset(void *dest, int value, unsigned int size);

typedef struct BitBuf_825AEC98 {
    unsigned char bytes[1];
} BitBuf_825AEC98;

typedef union Bits_825AEC98 {
    unsigned __int64 u;
    double d;
} Bits_825AEC98;

extern void fn_825AF508(__vector4 *out, void *reader);
extern unsigned __int64 fn_823B4900(void *reader, int bits, int a, int b);
extern void fn_825AF850(BitBuf_825AEC98 *buf, unsigned __int64 value, unsigned __int64 offset);
extern unsigned __int64 fn_825AF790(const BitBuf_825AEC98 *buf, unsigned __int64 offset);

__vector4 fn_825AEC98(void *reader)
{
    __vector4 direction;
    unsigned __int64 packed;
    __int64 exponent;
    unsigned __int64 mantissa;
    double value;
    float scale;
    float x;
    float y;
    float z;

    fn_825AF508(&direction, reader);
    packed = fn_823B4900(reader, 6, 0, 0);
    {
        BitBuf_825AEC98 buf;

        memset(&buf, 0, sizeof(buf));
        fn_825AF850(&buf, (packed >> 3) & 7, 0);
        fn_825AF850(&buf, packed & 7, 3);
        exponent = fn_825AF790(&buf, 0);
        mantissa = fn_825AF790(&buf, 3);
    }
    if (exponent == 0) {
        if (mantissa == 0) {
            value = 0.0;
            goto done;
        }
        mantissa <<= 49;
        exponent = 0x3fd;
        while ((mantissa & 0xfff0000000000000ULL) == 0) {
            mantissa <<= 1;
            exponent--;
        }
        mantissa &= 0xfffffffffffffULL;
    } else {
        exponent += 0x3fc;
        mantissa <<= 49;
    }
    {
        Bits_825AEC98 bits;

        bits.u = ((unsigned __int64)exponent << 52) | mantissa;
        value = bits.d;
    }
done:
    scale = (float)value;
    x = direction.f[0];
    y = direction.f[1];
    z = direction.f[2];
    direction = __VMXGetReg(77);
    direction.f[0] = x * scale;
    direction.f[1] = y * scale;
    direction.f[2] = z * scale;
    return direction;
}
