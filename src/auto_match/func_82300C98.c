typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float f[4];
} __vector4;

__vector4 __VMXGetReg(int reg);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, int lane);

typedef struct Sample_82300C98 {
    __vector4 values[21];
    float weight; // 0x150
} Sample_82300C98;

typedef struct Samples_82300C98 {
    Sample_82300C98 data[3];
    char pad[0x130];
    unsigned int current; // 0x550
    unsigned int count;   // 0x554
} Samples_82300C98;

void fn_82300C98(__vector4 *out, const Samples_82300C98 *samples, int channel)
{
    if (samples->count == 3) {
        unsigned int current = samples->current;
        unsigned int prior = current > 1 ? current - 1 : 2;
        float total = 0.0f;
        float scale;
        int i;
        __vector4 delta;

        for (i = 0; i < 3; ++i)
            total += samples->data[i].weight;
        delta = __vsubfp(samples->data[prior].values[channel], samples->data[current].values[channel]);
        scale = 1.0f / total;
        *out = __vmulfp(delta, __vspltw(__lvlx(&scale, 0), 0));
    } else {
        *out = __VMXGetReg(77);
    }
}
