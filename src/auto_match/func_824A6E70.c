typedef struct Sample_824A6E70 {
    char pad00[0x20];
    float low; /* 0x20 */
    char pad24[0x1c];
    float value; /* 0x40 */
    char pad44[0x3c];
    float high; /* 0x80 */
    char pad84[0xc];
    float weight; /* 0x90 */
    char pad94[0xc];
} Sample_824A6E70;

typedef struct History_824A6E70 {
    int unknown00;          /* 0x00 */
    Sample_824A6E70 *buff;  /* 0x04 */
    Sample_824A6E70 *end;   /* 0x08 */
    Sample_824A6E70 *first; /* 0x0c */
    Sample_824A6E70 *last;  /* 0x10 */
    unsigned int size;      /* 0x14 */
    int unknown18;          /* 0x18 */
    float scale;            /* 0x1c */
} History_824A6E70;

typedef struct Owner_824A6E70 {
    char pad00[0x3c];
    History_824A6E70 *history; /* 0x3c */
} Owner_824A6E70;

extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

static __forceinline Sample_824A6E70 *add_824A6E70(const History_824A6E70 *h, Sample_824A6E70 *p, int n)
{
    return p + (n < h->end - p ? n : n - (h->end - h->buff));
}

float fn_824A6E70(Owner_824A6E70 *self)
{
    History_824A6E70 *history = self->history;
    Sample_824A6E70 *sample;
    float fromHigh;
    float fromLow;

    if (history->size != 0) {
        sample = add_824A6E70(history, history->first, history->size - 1);
    } else {
        sample = 0;
    }
    if (sample != 0) {
        if (sample->weight == 0.0f) {
            return 0.0f;
        }
        fromHigh = sample->high - sample->value;
        fromLow = sample->low - sample->value;
        return fn_82539560(fromLow - fromHigh >= 0.0f ? fromLow : fromHigh, 0.0f,
                           history->scale * sample->weight, 0.0f, 1.0f);
    }
    return 0.0f;
}
