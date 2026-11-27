/* Reads a direction and a 7-bit packed scale (4-bit exponent, 3-bit mantissa) from a bit reader
   and returns the scaled direction. v77 is the game's reserved zero vector (/QVMXReserve). */

#include "xdk/vectorintrinsics.h"

void *memset(void *dest, int value, unsigned int size);

typedef struct BitBuf_825AE918 {
    unsigned char bytes[1];
} BitBuf_825AE918;

typedef union Bits_825AE918 {
    unsigned __int64 u;
    double d;
} Bits_825AE918;

extern void fn_825AF0C8(__vector4 *out, void *reader);
extern unsigned __int64 fn_823B4900(void *reader, int bits, int a, int b);
extern void fn_8232A988(BitBuf_825AE918 *buf, unsigned __int64 value, int offset, int width);
extern unsigned __int64 fn_8223A9E0(BitBuf_825AE918 *buf, int offset, int width);

__vector4 fn_825AE918(void *reader)
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

    fn_825AF0C8(&direction, reader);
    packed = fn_823B4900(reader, 7, 0, 0);
    {
        BitBuf_825AE918 buf;

        memset(&buf, 0, sizeof(buf));
        fn_8232A988(&buf, (packed >> 3) & 0xf, 0, 4);
        fn_8232A988(&buf, packed & 7, 4, 3);
        exponent = fn_8223A9E0(&buf, 0, 4);
        mantissa = fn_8223A9E0(&buf, 4, 3);
    }
    if (exponent == 0) {
        if (mantissa == 0) {
            value = 0.0;
            goto done;
        }
        mantissa <<= 49;
        exponent = 0x3f9;
        while ((mantissa & 0xfff0000000000000ULL) == 0) {
            mantissa <<= 1;
            exponent--;
        }
        mantissa &= 0xfffffffffffffULL;
    } else {
        exponent += 0x3f8;
        mantissa <<= 49;
    }
    {
        Bits_825AE918 bits;

        bits.u = ((unsigned __int64)exponent << 52) | mantissa;
        value = bits.d;
    }
done:
    scale = (float)value;
    x = direction.vector4_f32[0];
    y = direction.vector4_f32[1];
    z = direction.vector4_f32[2];
    direction = __VMXGetReg(77);
    direction.vector4_f32[0] = x * scale;
    direction.vector4_f32[1] = y * scale;
    direction.vector4_f32[2] = z * scale;
    return direction;
}
