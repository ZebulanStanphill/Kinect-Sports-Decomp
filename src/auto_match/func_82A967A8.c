typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    unsigned int u[4];
} __vector4;

__vector4 __lvlx(const void *, int);
__vector4 __vpkd3d(__vector4, __vector4, unsigned int, unsigned int, unsigned int);
__vector4 __vsplth(__vector4, unsigned int);
void __stvehx(__vector4, void *, int);

static __forceinline unsigned short FloatToHalf(float value)
{
    unsigned short result;
    __vector4 v = __lvlx(&value, 0);
    v = __vpkd3d(v, v, 5, 2, 2);
    v = __vsplth(v, 0);
    __stvehx(v, &result, 0);
    return result;
}

typedef struct Fields_82A967A8 {
    char pad[12];
    unsigned int index[4]; /* 0x0c */
    unsigned int mask[4];  /* 0x1c */
    unsigned int shift[4]; /* 0x2c */
} Fields_82A967A8;

extern void fn_82AA7710(void *dst, const void *src, unsigned int format);

void fn_82A967A8(unsigned int *data, const Fields_82A967A8 *fields, __vector4 input)
{
    float values[4];
    unsigned int value;
    unsigned int result;
    int i;
    *(__vector4 *)values = input;
    for (i = 0; i < 4; i++) {
        value = (unsigned int)((FloatToHalf(values[i]) << fields->shift[i]) & fields->mask[i]);
        fn_82AA7710(&result, &value, 0x40001);
        data[fields->index[i]] |= result;
    }
}
