#include <math.h>

typedef struct Vec3_825AF0C8 {
    float x; /* 0x00 */
    float y; /* 0x04 */
    float z; /* 0x08 */
} Vec3_825AF0C8;

extern unsigned int fn_8223C610(void *reader, int bits, int a, int b);
extern unsigned __int64 fn_823B4900(void *reader, int bits, int a, int b);

extern unsigned int lbl_8329785C;     /* initialisation guard of the two statics below */
extern unsigned __int64 lbl_83297860; /* rows per octant: sqrt(1 << 12) */
extern unsigned __int64 lbl_83297868; /* cells per octant: rows * rows */
extern float lbl_831D4548;            /* pi / 2 */

static __forceinline unsigned __int64 IntSqrt(unsigned __int64 value)
{
    return (unsigned __int64)(float)sqrt((double)value);
}

/* Decodes a unit vector packed as three sign bits and an index into an octant grid of
   12 bits: rows of latitude, each row holding 2 * row + 1 cells of longitude. */
Vec3_825AF0C8 fn_825AF0C8(void *reader)
{
    Vec3_825AF0C8 out;
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

    if ((lbl_8329785C & 1) == 0) {
        lbl_8329785C |= 1;
        lbl_83297860 = IntSqrt((unsigned __int64)1 << 12);
    }
    if ((lbl_8329785C & 2) == 0) {
        lbl_8329785C |= 2;
        lbl_83297868 = lbl_83297860 * lbl_83297860;
    }
    negX = fn_8223C610(reader, 1, 0, 0) != 0;
    negY = fn_8223C610(reader, 1, 0, 0) != 0;
    negZ = fn_8223C610(reader, 1, 0, 0) != 0;
    index = fn_823B4900(reader, 12, 0, 0);
    row = IntSqrt(index);
    azimuth = ((double)(index - row * row) + 0.5) / (double)(row * 2 + 1) * lbl_831D4548;
    y = (float)sin((float)((1.0 - ((double)row + 0.5) / (double)lbl_83297860) * lbl_831D4548));
    ring = sqrt(1.0 - y * y);
    x = (float)((float)cos((float)azimuth) * ring);
    z = (float)((float)sin((float)azimuth) * ring);
    if (negX)
        x = -x;
    if (negY)
        y = -y;
    if (negZ)
        z = -z;
    out.x = x;
    out.y = y;
    out.z = z;
    return out;
}
