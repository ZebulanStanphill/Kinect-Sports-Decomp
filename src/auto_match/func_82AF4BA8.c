typedef struct Constant_82AF4BA8 {
    char pad0[0x8];
    unsigned int format; /* 0x8 */
} Constant_82AF4BA8;

extern float fn_82B80EE0(Constant_82AF4BA8 *constant, unsigned int component, unsigned int flags);

int fn_82AF4BA8(void *self, Constant_82AF4BA8 *constant, unsigned int count, unsigned int swizzle,
                unsigned int flags, float *values)
{
    unsigned char positive;
    unsigned char negative;
    unsigned int i;
    float value;

    if ((constant->format & 0x3f80) == 0x3e00) {
        return (flags & 2) ? 4 : 1;
    }
    positive = 0;
    negative = 0;
    for (i = 0; i < count; i++) {
        value = fn_82B80EE0(constant, (swizzle >> (i * 2)) & 3, flags);
        values[i] = value;
        if (value < 0.0f) {
            negative = 1;
        } else if (value > 0.0f) {
            positive = 1;
        }
    }
    if (negative && positive) {
        return 1;
    }
    return 2;
}
