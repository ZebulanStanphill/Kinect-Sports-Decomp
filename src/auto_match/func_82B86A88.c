typedef union Constant_82B86A88 {
    float f;
    int i;
    unsigned int u;
} Constant_82B86A88;

extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code, ...);
extern void fn_82B86888(void *ctx, unsigned int count, Constant_82B86A88 *values, unsigned int types);

static __forceinline unsigned int GetBits(const unsigned int *words, unsigned int low, unsigned int high)
{
    return (((2 << (high & 0x1f)) - 1) & words[low >> 5] & (0xffffffff << (low & 0x1f))) >> (low & 0x1f);
}

void fn_82B86A88(void *ctx, unsigned int count, const double *values, unsigned int types)
{
    Constant_82B86A88 constants[4];
    unsigned int i;

    for (i = 0; i < count; i++) {
        switch (GetBits(&types, i * 2, i * 2 + 1)) {
        case 0:
            constants[i].f = (float)values[i];
            break;
        case 1:
            constants[i].i = (int)values[i];
            break;
        case 2:
            constants[i].u = (unsigned int)values[i];
            break;
        default:
            fn_82AA66A8(ctx, 0x12c0);
        }
    }
    fn_82B86888(ctx, count, constants, types);
}
