typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vor(__vector4 a, __vector4 b);

typedef struct Fields_82A95A58 {
    char pad[0xc];
    unsigned int index[4];
    unsigned int mask[4];
    unsigned int shift[4];
} Fields_82A95A58;

__vector4 fn_82A95A58(const unsigned char *data, const Fields_82A95A58 *fields)
{
    unsigned int out[4];
    int i;

    for (i = 0; i < 4; i++)
        out[i] = (data[fields->index[i]] & fields->mask[i]) >> fields->shift[i];
    return __vor(__lvlx(out, 0), __lvrx(out, 16));
}
