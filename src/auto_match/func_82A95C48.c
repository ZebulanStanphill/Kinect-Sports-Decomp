typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsplth(__vector4 v, unsigned int i);
__vector4 __vupkd3d(__vector4 v, unsigned int type);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct Fields_82A95C48 {
    char pad[0xc];
    unsigned int index[4];
    unsigned int mask[4];
    unsigned int shift[4];
} Fields_82A95C48;

extern void fn_82AA7710(void *dst, const void *src, unsigned int format);

/* XMConvertHalfToFloat: splat the half, unpack it as a float16 (vupkd3d type 5), store element 0. */
static __forceinline float HalfToFloat(unsigned short half)
{
    __vector4 v;
    float result;

    v = __lvlx(&half, 0);
    v = __vsplth(v, 0);
    v = __vupkd3d(v, 5);
    __stvewx(v, &result, 0);
    return result;
}

__vector4 fn_82A95C48(const unsigned int *data, const Fields_82A95C48 *fields)
{
    unsigned int value;
    float out[4];
    int i;

    for (i = 0; i < 4; i++) {
        fn_82AA7710(&value, data + fields->index[i], 0x40001);
        out[i] = HalfToFloat((unsigned short)((fields->mask[i] & value) >> fields->shift[i]));
    }
    return __vor(__lvlx(out, 0), __lvrx(out, 16));
}
