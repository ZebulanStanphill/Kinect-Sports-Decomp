typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vcmpgtuh(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vadduhm(__vector4 a, __vector4 b);

typedef union Halves_8308A420 {
    unsigned short h[8];
    unsigned int w[4];
    __vector4 v;
} Halves_8308A420;

typedef struct Size_8308A420 {
    int depth;      /* 0x0 */
    int width;      /* 0x4 */
    int height;     /* 0x8 */
} Size_8308A420;

void fn_8308A420(void *self, __vector4 *data, int count, int offset, const Size_8308A420 *size)
{
    Halves_8308A420 limit, add;
    __vector4 *end = data + count;
    unsigned short d = (unsigned short)(size->depth - 1);
    unsigned short w = (unsigned short)(size->width - 1);
    unsigned short h = (unsigned short)(size->height - 1);
    unsigned int o = (offset << 16) + offset;
    __vector4 *p;

    limit.h[4] = d;
    add.w[0] = o;
    limit.h[5] = d;
    limit.h[0] = w;
    limit.h[2] = w;
    limit.h[1] = h;
    limit.h[3] = h;
    add.w[1] = o;
    add.w[2] = o;
    add.w[3] = 0;
    for (p = data; p < end; p++) {
        __vector4 v = *p;
        __vector4 m = __vcmpgtuh(v, limit.v);
        *p = __vadduhm(v, __vand(m, add.v));
    }
}
