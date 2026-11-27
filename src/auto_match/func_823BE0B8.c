#include <math.h>
#include "xdk/vectorintrinsics.h"

extern unsigned int fn_8223C610(void *reader, int bits, int a, int b);
extern unsigned __int64 fn_823B4900(void *reader, int bits, int a, int b);

extern unsigned int lbl_832976B0;     /* initialisation guard of the two statics below */
extern unsigned __int64 lbl_832976B8; /* rows per octant: sqrt(1 << 17) */
extern unsigned __int64 lbl_832976C0; /* cells per octant: rows * rows */
extern float lbl_831D2D78;            /* pi / 2 */

static __forceinline unsigned __int64 IntSqrt(unsigned __int64 value)
{
    return (unsigned __int64)(float)sqrt((double)value);
}

/* Decodes a unit vector packed as three sign bits and an index into an octant grid of
   17 bits: rows of latitude, each row holding 2 * row + 1 cells of longitude. */
__vector4 fn_823BE0B8(void *reader)
{
    __vector4 out;
    unsigned char negX;
    unsigned char negY;
    unsigned char negZ;
    unsigned __int64 index;
    unsigned __int64 row;
    double azimuth;
    float y;
    double ring;
    float x;
    float z;

    if ((lbl_832976B0 & 1) == 0) {
        lbl_832976B0 |= 1;
        lbl_832976B8 = IntSqrt((unsigned __int64)1 << 17);
    }
    if ((lbl_832976B0 & 2) == 0) {
        lbl_832976B0 |= 2;
        lbl_832976C0 = lbl_832976B8 * lbl_832976B8;
    }
    negX = fn_8223C610(reader, 1, 0, 0) != 0;
    negY = fn_8223C610(reader, 1, 0, 0) != 0;
    negZ = fn_8223C610(reader, 1, 0, 0) != 0;
    index = fn_823B4900(reader, 17, 0, 0);
    row = IntSqrt(index);
    azimuth = ((double)(index - row * row) + 0.5) / (double)(row * 2 + 1) * lbl_831D2D78;
    y = (float)sin((float)((1.0 - ((double)row + 0.5) / (double)lbl_832976B8) * lbl_831D2D78));
    ring = sqrt(1.0 - y * y);
    x = (float)((float)cos((float)azimuth) * ring);
    z = (float)((float)sin((float)azimuth) * ring);
    if (negX)
        x = -x;
    if (negY)
        y = -y;
    if (negZ)
        z = -z;
    out = __VMXGetReg(77);
    out.vector4_f32[0] = x;
    out.vector4_f32[1] = y;
    out.vector4_f32[2] = z;
    return out;
}
