/* Expands a 64-bit mask (two words read through fn_82AA7710) into 16 four-lane vectors: each
   nibble becomes one entry of a 4x4 table, and each entry is expanded to its four bits
   (bit 3 and up, bit 2, bit 1, bit 0) converted to float. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vspltisw(int value);
__vector4 __vcfux(__vector4 v, int shift);

extern void fn_82AA7710(void *dst, const void *src, unsigned int flags);

static __forceinline __vector4 LoadInt4(const unsigned int *p)
{
    __vector4 r = __lvrx(p, 16);
    __vector4 l = __lvlx(p, 0);
    return __vor(l, r);
}

void fn_82A96130(const unsigned int *src, __vector4 *out)
{
    unsigned int words[2];
    __vector4 rows[4];
    unsigned int i;

    fn_82AA7710(&words[0], &src[0], 0x40001);
    fn_82AA7710(&words[1], &src[1], 0x40001);
    rows[0] = rows[1] = rows[2] = rows[3] = __vspltisw(0);
    for (i = 0; i < 16; i++) {
        unsigned int w = words[i >> 3];
        __vector4 t = rows[i >> 2];
        ((unsigned int *)&t)[i & 3] = w & 0xf;
        words[i >> 3] = w >> 4;
        rows[i >> 2] = t;
    }
    for (i = 0; i < 16; i++) {
        __vector4 t = rows[i >> 2];
        unsigned int e = ((unsigned int *)&t)[i & 3];
        unsigned int bits[4];
        bits[0] = e >> 3;
        bits[1] = (e >> 2) & 1;
        bits[2] = (e >> 1) & 1;
        bits[3] = e & 1;
        out[i] = __vcfux(LoadInt4(bits), 0);
    }
}
