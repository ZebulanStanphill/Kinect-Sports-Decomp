typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float values[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vor(__vector4 first, __vector4 second);

typedef struct Fields_82A968E0 {
    char padding[0x1c];
    unsigned int mask[4];  /* 0x1c */
    unsigned int shift[4]; /* 0x2c */
} Fields_82A968E0;

__vector4 fn_82A968E0(float value, const Fields_82A968E0 *fields)
{
    float output[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    int index;
    for (index = 0; index < 4; index++) {
        if ((fields->mask[index] >> fields->shift[index]) == 1) {
            output[index] = 1.0f - value - 0.5f;
        }
    }
    return __vor(__lvlx(output, 0), __lvrx(output, 16));
}
