typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vor(__vector4 a, __vector4 b);

typedef struct Fields_82A95BC8 {
    char pad[0xc];
    unsigned int index[4];
    unsigned int mask[4];
    unsigned int shift[4];
} Fields_82A95BC8;

extern void fn_82AA7710(void *dst, const void *src, unsigned int format);

__vector4 fn_82A95BC8(const unsigned int *data, const Fields_82A95BC8 *fields)
{
    unsigned int value;
    unsigned int out[4];
    int i;

    for (i = 0; i < 4; i++) {
        fn_82AA7710(&value, data + fields->index[i], 0x40001);
        out[i] = (fields->mask[i] & value) >> fields->shift[i];
    }
    return __vor(__lvlx(out, 0), __lvrx(out, 16));
}
