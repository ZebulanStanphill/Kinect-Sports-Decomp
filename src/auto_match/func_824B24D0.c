typedef struct Sample_824B24D0 {
    char pad0[0x14];
    float level; /* 0x14 */
    char pad18[0x40 - 0x18];
    float duration; /* 0x40 */
    char pad44[0x50 - 0x44];
} Sample_824B24D0;

typedef struct Ring_824B24D0 {
    Sample_824B24D0 *buff;  /* 0x0 */
    Sample_824B24D0 *end;   /* 0x4 */
    Sample_824B24D0 *first; /* 0x8 */
    Sample_824B24D0 *last;  /* 0xc */
    unsigned int size;      /* 0x10 */
} Ring_824B24D0;

typedef struct History_824B24D0 {
    int pad0;
    Ring_824B24D0 samples; /* 0x4 */
    int pad18;
    unsigned char flag; /* 0x1c */
} History_824B24D0;

typedef struct Self_824B24D0 {
    char pad0[0x3c];
    History_824B24D0 *history; /* 0x3c */
} Self_824B24D0;

extern void fn_824B2610(Self_824B24D0 *self);

static __forceinline Sample_824B24D0 *Add(const Ring_824B24D0 *ring, Sample_824B24D0 *p, int n)
{
    return p + (n < ring->end - p ? n : n - (ring->end - ring->buff));
}

static __forceinline Sample_824B24D0 *FromBack(Ring_824B24D0 *ring, unsigned int i)
{
    if (i < ring->size) {
        return Add(ring, ring->first, ring->size - i - 1);
    }
    return 0;
}

static __forceinline unsigned char IsFalling(History_824B24D0 *history)
{
    unsigned int count;
    unsigned int i;
    float remaining;
    Sample_824B24D0 *sample;

    count = history->samples.size;
    if (count > 1) {
        remaining = 0.5f;
        i = 1;
        do {
            if (i >= count) {
                break;
            }
            sample = FromBack(&history->samples, i);
            i++;
            if (sample->level < -2.0f) {
                return 1;
            }
            remaining -= sample->duration;
        } while (remaining > 0.0f);
    }
    return 0;
}

void fn_824B24D0(Self_824B24D0 *self)
{
    History_824B24D0 *history;

    fn_824B2610(self);
    history = self->history;
    history->flag = IsFalling(history);
}
