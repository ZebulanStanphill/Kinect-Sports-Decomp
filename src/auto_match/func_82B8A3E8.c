/* Emits a scalar constant of the given type (0 float, 1 int, 2 unsigned); denormal floats
   are flushed to a signed zero. */

#include <string.h>

typedef struct Modifier_82B8A3E8 {
    unsigned int bits;
} Modifier_82B8A3E8;

typedef union FloatBits_82B8A3E8 {
    float f;
    unsigned int u;
} FloatBits_82B8A3E8;

extern void fn_82B86888(void *ctx, int count, float *values, Modifier_82B8A3E8 modifier);
extern void fn_82B8A2E0(void *ctx, unsigned int value, unsigned char isSigned);
extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int error);

static __forceinline unsigned char IsNormal_82B8A3E8(float f)
{
    FloatBits_82B8A3E8 v;

    v.f = f;
    if ((v.u & 0x7fffffff) == 0 || (v.u & 0x7f800000) != 0) {
        return 1;
    }
    return 0;
}

void fn_82B8A3E8(void *ctx, double value, unsigned int type)
{
    switch (type) {
    case 0: {
        FloatBits_82B8A3E8 bits;
        float values[4];
        Modifier_82B8A3E8 modifier;

        bits.f = (float)value;
        if (!IsNormal_82B8A3E8(bits.f)) {
            bits.u &= 0x80000000;
        }
        values[0] = bits.f;
        memset(&modifier, 0, sizeof(modifier));
        values[1] = 0.0f;
        values[2] = 0.0f;
        values[3] = 0.0f;
        fn_82B86888(ctx, 1, values, modifier);
        break;
    }
    case 1:
        fn_82B8A2E0(ctx, (int)value, 1);
        break;
    default:
        fn_82AA66A8(ctx, 0x12c0);
    case 2:
        fn_82B8A2E0(ctx, (unsigned int)value, 0);
        break;
    }
}
