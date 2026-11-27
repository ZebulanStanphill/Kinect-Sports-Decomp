
/* Reads a direction and a 9-bit packed scale (3-bit and 6-bit fields) from a network
   buffer and returns the scaled direction. v77 is the game's reserved zero vector,
   read with __VMXGetReg (/QVMXReserve). */

#include "xdk/vectorintrinsics.h"

void *memset(void *dest, int value, unsigned int size);

typedef struct Reader_822CB1E0 {
    int h[4];
    unsigned char *data; /* 0x10 */
    int size;            /* 0x14 */
    void *heap;          /* 0x18 */
    int a;               /* 0x1c */
    int b;               /* 0x20 */
} Reader_822CB1E0;

typedef struct Packed_822CB1E0 {
    unsigned short bits;
} Packed_822CB1E0;

extern unsigned char *fn_82236140(void *src);
extern void fn_828E9D28(Reader_822CB1E0 *r, unsigned char *data, int size);
extern void fn_82237F60(__vector4 *out, Reader_822CB1E0 *r);
extern unsigned int fn_823B4900(Reader_822CB1E0 *r, int bits, int a, int b);
extern void fn_8232A988(Packed_822CB1E0 *bits, unsigned __int64 value, unsigned __int64 offset,
                        unsigned __int64 width);
extern float fn_822395B8(Packed_822CB1E0 *bits);
extern void fn_8265CA20(void *p);

__vector4 *fn_822CB1E0(__vector4 *out, void *src)
{
    __vector4 dir; /* x, y, z written by fn_82237F60 */
    Reader_822CB1E0 r;
    Packed_822CB1E0 packed;
    unsigned char *data;
    unsigned int code;
    float scale;
    float x;
    float y;
    float z;

    data = fn_82236140(src);
    r.data = data;
    r.heap = 0;
    r.a = 0;
    r.b = 0;
    r.size = 4;
    fn_828E9D28(&r, data, 4);
    fn_82237F60(&dir, &r);
    code = fn_823B4900(&r, 9, 0, 0);
    memset(&packed, 0, sizeof(packed));
    fn_8232A988(&packed, (code >> 6) & 7, 0, 3);
    fn_8232A988(&packed, code & 0x3f, 3, 6);
    scale = fn_822395B8(&packed);
    x = dir.vector4_f32[0];
    y = dir.vector4_f32[1];
    z = dir.vector4_f32[2];
    dir = __VMXGetReg(77);
    dir.vector4_f32[0] = x * scale;
    dir.vector4_f32[1] = y * scale;
    dir.vector4_f32[2] = z * scale;
    *out = dir;
    if (r.heap != 0) {
        fn_8265CA20(r.heap);
    }
    return out;
}
