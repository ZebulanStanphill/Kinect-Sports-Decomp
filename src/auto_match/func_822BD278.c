// Unpacks a quantised 3-float vector (11 bits each, see fn_828E5538) from a network
// buffer into *out.

/* v77 is the game's reserved zero vector, read with __VMXGetReg (/QVMXReserve). */

#include "xdk/vectorintrinsics.h"

typedef struct Reader_822BD278 {
    int h[4];
    unsigned char *data;
    int size;
    void *heap;
    int a;
    int b;
} Reader_822BD278;

extern unsigned char *fn_82236140(void *src);
extern void fn_828E9D28(Reader_822BD278 *r, unsigned char *data, int size);
extern float fn_828E5538(Reader_822BD278 *r, int bits, int exp);
extern void fn_8265CA20(void *p);

__vector4 *fn_822BD278(__vector4 *out, void *src)
{
    __vector4 v;
    Reader_822BD278 r;
    unsigned char *data;

    data = fn_82236140(src);
    r.data = data;
    r.heap = 0;
    r.a = 0;
    r.b = 0;
    r.size = 8;
    fn_828E9D28(&r, data, 8);
    v = __VMXGetReg(77);
    v.vector4_f32[0] = fn_828E5538(&r, 0xb, 7);
    v.vector4_f32[1] = fn_828E5538(&r, 0xb, 7);
    v.vector4_f32[2] = fn_828E5538(&r, 0xb, 7);
    *out = v;
    if (r.heap != 0)
        fn_8265CA20(r.heap);
    return out;
}
