typedef struct Params_82FA4AF0 {
    char pad0[4];
    float first;
    float second;
    unsigned int count;
    float gain1;
    float gain2;
    float third;
    unsigned int enabled;
    unsigned int mode;
    float samples[1];
} Params_82FA4AF0;

extern double fn_82F655D8(double, double);

static __forceinline float AsFloat(unsigned int bits)
{
    return *(float *)&bits;
}

int fn_82FA4AF0(Params_82FA4AF0 *self, const unsigned int *data)
{
    const unsigned int *p = data;
    unsigned int i;
    int result;

    if (data == 0) {
        result = 31;
    } else {
        self->first = AsFloat(*p++);
        self->second = AsFloat(*p++);
        self->count = *p++;
        self->gain1 = (float)fn_82F655D8(10.0, AsFloat(*p++) * 0.05f);
        self->gain2 = (float)fn_82F655D8(10.0, AsFloat(*p++) * 0.05f);
        self->third = AsFloat(*p++);
        self->enabled = *(const unsigned char *)p != 0;
        p = (const unsigned int *)((const unsigned char *)p + 1);
        self->mode = *p++;
        if (self->mode == 1) {
            for (i = 0; i < self->count; ++i) {
                float sample = AsFloat(*p++);
                self->samples[i] = sample;
            }
        }
        result = 1;
    }
    return result;
}
