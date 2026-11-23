typedef struct State_83021E80 {
    unsigned int unknown;     /* 0x00 */
    float coefficients[4];    /* 0x04 */
    float rate;               /* 0x14 */
    float scale;              /* 0x18 */
    unsigned int size;        /* 0x1c */
    unsigned int channelMask; /* 0x20 */
    unsigned char mode;       /* 0x24 */
    unsigned char bypass;     /* 0x25 */
    void *channels;           /* 0x28 */
    unsigned char padding[1];
    unsigned char flags; /* 0x2d */
} State_83021E80;

typedef struct Params_83021E80 {
    unsigned char padding[0x60];
    float rate;          /* 0x60 */
    float scale;         /* 0x64 */
    unsigned int size;   /* 0x68 */
    unsigned char flags; /* 0x6c */
} Params_83021E80;

extern unsigned int lbl_831BC770;
extern void fn_82FA52E0(unsigned int pool, void *memory);
extern void *fn_82FA5100(unsigned int pool, unsigned int size, unsigned int flags);
extern unsigned char fn_8303A930(float rate, unsigned char mode, float *frequency);
extern void fn_8303AA38(float frequency, float *coefficients);
extern void *XMemSet(void *, int, unsigned int);
extern void *fn_82A1DDC0(void *, const void *, unsigned int);

static __forceinline void *AllocateChannels(unsigned int count)
{
    return fn_82FA5100(lbl_831BC770, count * 16, 1);
}

int fn_83021E80(State_83021E80 *state, const Params_83021E80 *params)
{
    unsigned int mask;
    unsigned int count;
    unsigned int bytes;
    void *channels;
    float frequency;

    if (state->channels != 0) {
        fn_82FA52E0(lbl_831BC770, state->channels);
        state->channels = 0;
    }
    mask = state->channelMask;
    count = 0;
    for (; mask != 0; mask &= mask - 1) {
        ++count;
    }
    bytes = count * 16;
    channels = AllocateChannels(count);
    state->channels = channels;
    if (channels == 0) {
        return 0x34;
    }
    state->rate = params->rate;
    state->scale = params->scale;
    state->size = params->size;
    frequency = 0.0f;
    state->flags = params->flags;
    state->bypass = fn_8303A930(state->rate, state->mode, &frequency);
    if (state->size >= 8) {
        if (state->bypass != 0) {
            XMemSet(state->channels, 0, bytes);
            return 1;
        }
        fn_8303AA38(frequency, state->coefficients);
    }
    fn_82A1DDC0(state->channels, params, bytes);
    return 1;
}
