typedef struct Tap_829E9FF8 {
    unsigned int offset; /* 0x0 */
    int channelCount;    /* 0x4 */
    const float *gains;  /* 0x8 */
} Tap_829E9FF8;

typedef struct TapVector_829E9FF8 {
    int allocator;       /* 0x0 */
    Tap_829E9FF8 *first; /* 0x4 */
    Tap_829E9FF8 *last;  /* 0x8 */
    Tap_829E9FF8 *end;   /* 0xc */
} TapVector_829E9FF8;

typedef struct TapSet_829E9FF8 {
    unsigned int stride;     /* 0x0 */
    TapVector_829E9FF8 taps; /* 0x4 */
} TapSet_829E9FF8;

typedef struct Mixer_829E9FF8 {
    char pad0[0x20];
    int samplesPerFrame; /* 0x20 */
} Mixer_829E9FF8;

static __forceinline unsigned int TapCount(const TapVector_829E9FF8 *taps)
{
    return taps->last - taps->first;
}

void fn_829E9FF8(Mixer_829E9FF8 *self, const unsigned char *source, TapSet_829E9FF8 *set, int count,
                 unsigned int tapIndex, float *out)
{
    unsigned int base;
    int i;
    int sample;
    int channel;

    base = 0;
    for (i = 0; i < count; i++) {
        Tap_829E9FF8 *tap = &set->taps.first[tapIndex];
        const unsigned char *row = source + self->samplesPerFrame * base + tap->offset;

        for (sample = 0; sample < self->samplesPerFrame; sample++) {
            const unsigned char *in = row + sample;
            const float *gain = tap->gains;
            float sum = 0.0f;

            for (channel = 0; channel < tap->channelCount; channel++) {
                sum += *in * *gain;
                in += self->samplesPerFrame;
                gain++;
            }
            *out++ = sum;
        }
        tapIndex++;
        if (tapIndex >= TapCount(&set->taps)) {
            tapIndex = 0;
            base += set->stride;
        }
    }
}
