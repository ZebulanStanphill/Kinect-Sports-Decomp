typedef struct Sample_824A6D90 {
    char pad00[0x10];
    float low; /* 0x10 */
    char pad14[0x1c];
    float value; /* 0x30 */
    char pad34[0x3c];
    float high; /* 0x70 */
    char pad74[0x1c];
    float weight; /* 0x90 */
    char pad94[0xc];
} Sample_824A6D90;

typedef struct History_824A6D90 {
    int unknown00;          /* 0x00 */
    Sample_824A6D90 *buff;  /* 0x04 */
    Sample_824A6D90 *end;   /* 0x08 */
    Sample_824A6D90 *first; /* 0x0c */
    Sample_824A6D90 *last;  /* 0x10 */
    unsigned int size;      /* 0x14 */
    int unknown18;          /* 0x18 */
    float scale;            /* 0x1c */
} History_824A6D90;

typedef struct Owner_824A6D90 {
    char pad00[0x3c];
    History_824A6D90 *history; /* 0x3c */
} Owner_824A6D90;

extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

static __forceinline Sample_824A6D90 *add_824A6D90(const History_824A6D90 *h, Sample_824A6D90 *p, int n)
{
    return p + (n < h->end - p ? n : n - (h->end - h->buff));
}

float fn_824A6D90(Owner_824A6D90 *self)
{
    History_824A6D90 *history = self->history;
    Sample_824A6D90 *sample;
    float fromHigh;
    float fromLow;

    if (history->size != 0) {
        sample = add_824A6D90(history, history->first, history->size - 1);
    } else {
        sample = 0;
    }
    if (sample != 0) {
        if (sample->weight == 0.0f) {
            return 0.0f;
        }
        fromHigh = sample->value - sample->high;
        fromLow = sample->value - sample->low;
        return fn_82539560(fromLow - fromHigh >= 0.0f ? fromLow : fromHigh, 0.0f,
                           history->scale * sample->weight, 0.0f, 1.0f);
    }
    return 0.0f;
}
