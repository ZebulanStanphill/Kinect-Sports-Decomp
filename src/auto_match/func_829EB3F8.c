typedef struct Tap_829EB3F8 {
    unsigned int offset; /* 0x0 */
    int channelCount;    /* 0x4 */
    const float *gains;  /* 0x8 */
} Tap_829EB3F8;

typedef struct TapVector_829EB3F8 {
    int allocator;       /* 0x0 */
    Tap_829EB3F8 *first; /* 0x4 */
    Tap_829EB3F8 *last;  /* 0x8 */
    Tap_829EB3F8 *end;   /* 0xc */
} TapVector_829EB3F8;

typedef struct TapSet_829EB3F8 {
    unsigned int stride;     /* 0x0 */
    TapVector_829EB3F8 taps; /* 0x4 */
} TapSet_829EB3F8;

typedef struct Layout_829EB3F8 {
    char pad0[0x1c];
    int rowPitch;    /* 0x1c */
    int pad20;       /* 0x20 */
    int columnPitch; /* 0x24 */
    int base;        /* 0x28 */
} Layout_829EB3F8;

typedef struct Mixer_829EB3F8 {
    char pad0[0x20];
    int samplesPerFrame; /* 0x20 */
    char pad24[0x174 - 0x24];
    float **channels; /* 0x174 */
    char pad178[0x1dc - 0x178];
    float *scratch; /* 0x1dc */
} Mixer_829EB3F8;

static __forceinline unsigned int TapCount(const TapVector_829EB3F8 *taps)
{
    return taps->last - taps->first;
}

extern void fn_829EA4C0(Mixer_829EB3F8 *self, unsigned int position, int channelCount, int source);
extern void fn_829EE638(const float *x, float *out, float a, int count);
extern void fn_829EE660(const float *y, const float *x, float *out, float a, int count);

void fn_829EB3F8(Mixer_829EB3F8 *self, Layout_829EB3F8 *layout, int row, int frames, int column, int count,
                 int source, TapSet_829EB3F8 *set, unsigned int tapIndex, unsigned int position)
{
    int i;

    for (i = 0; i < count; i++) {
        Tap_829EB3F8 *tap = &set->taps.first[tapIndex];
        const float *gains;
        float *dest;
        int length;

        fn_829EA4C0(self, tap->offset + position, tap->channelCount, source);
        dest = (float *)(row * layout->rowPitch + column * layout->columnPitch + layout->base);
        gains = tap->gains;
        length = frames * self->samplesPerFrame;
        if (tap->channelCount > 1) {
            float *scratch = self->scratch;
            int channel;

            fn_829EE638(self->channels[0], scratch, *gains, length);
            gains++;
            for (channel = 1; channel < tap->channelCount - 1; channel++, gains++) {
                fn_829EE660(scratch, self->channels[channel], scratch, *gains, length);
            }
            fn_829EE660(scratch, self->channels[channel], dest, *gains, length);
        } else if (tap->channelCount == 1) {
            fn_829EE638(self->channels[0], dest, *gains, length);
        }
        tapIndex++;
        if (tapIndex >= TapCount(&set->taps)) {
            tapIndex = 0;
            position += set->stride;
        }
        column++;
    }
}
