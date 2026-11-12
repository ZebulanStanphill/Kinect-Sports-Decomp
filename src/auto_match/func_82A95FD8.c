/* Expands a 64-bit mask (two words read through fn_82AA7710) into a 4x4 table of nibbles,
   converts the table to float, scales it by lbl_820D26F0 and writes each entry into the w lane
   of the matching output vector. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltisw(int value);
__vector4 __vcfux(__vector4 v, int shift);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);

extern void fn_82AA7710(void *dst, const void *src, unsigned int flags);
extern const __vector4 lbl_820D26F0;

static __forceinline void ToFloat(__vector4 *v)
{
    *v = __vcfux(*v, 0);
}

static __forceinline void Scale(__vector4 *v, const __vector4 *k)
{
    *v = __vmulfp(*v, *k);
}

void fn_82A95FD8(const unsigned int *src, __vector4 *out)
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
    for (i = 0; i < 4; i++) {
        ToFloat(&rows[i]);
        Scale(&rows[i], &lbl_820D26F0);
    }
    for (i = 0; i < 16; i++) {
        __vector4 t = rows[i >> 2];
        out[i] = __vrlimi(out[i], __lvlx(&((float *)&t)[i & 3], 0), 1, 1);
    }
}
