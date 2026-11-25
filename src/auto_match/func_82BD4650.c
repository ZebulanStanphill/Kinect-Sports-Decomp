typedef struct Band_82BD4650 {
    int channel[3];
} Band_82BD4650;

typedef struct Allocator_82BD4650 {
    char pad0[0x50];
    unsigned int active[4]; /* 0x50 */
    char pad60[0xc0];
    unsigned int start; /* 0x120 */
    char pad124[0x4];
    Band_82BD4650 shortBands[4];    /* 0x128 */
    Band_82BD4650 shortLimits[4];   /* 0x158 */
    Band_82BD4650 longBands[0x22];  /* 0x188 */
    Band_82BD4650 longLimits[0x22]; /* 0x320 */
} Allocator_82BD4650;

/* Hands out up to budget steps round-robin over the bands of one channel; returns the sum of the bands. */
int fn_82BD4650(Allocator_82BD4650 *self, int isShort, unsigned int ch, unsigned int budget)
{
    int total;
    unsigned int start;
    Band_82BD4650 *bands;
    Band_82BD4650 *limits;
    unsigned int count;
    unsigned int used;
    unsigned int i;
    Band_82BD4650 *band;
    Band_82BD4650 *end;
    unsigned int added;
    unsigned int k;
    int value;

    total = 0;
    if (isShort == 1) {
        start = self->start;
        bands = self->shortBands;
        limits = self->shortLimits;
        used = 0;
        count = 4;
        /* the original tests the limit as an unsigned word (cmplwi) */
        for (i = 0; i < 4; i++) {
            if (self->active[i] != 0 && (unsigned int)self->shortLimits[i].channel[ch] != 0) {
                used++;
            }
        }
        if (used != 0) {
            start = start % used;
        }
    } else {
        start = 0;
        bands = self->longBands;
        limits = self->longLimits;
        count = 0x22;
    }
    end = bands + count;
    band = bands;
    if (band < end) {
        do {
            band->channel[ch] = -band->channel[ch];
            band++;
        } while (band < end);
    }
    do {
        added = 0;
        for (i = 0; i < count; i++) {
            if (budget == 0) {
                break;
            }
            k = (i + start) % count;
            band = &bands[k];
            value = band->channel[ch];
            if (value < limits[k].channel[ch]) {
                value++;
                added++;
                band->channel[ch] = value;
                if (value > 0) {
                    budget--;
                }
            }
        }
    } while (added != 0 && budget != 0);
    band = bands;
    if (band < end) {
        do {
            if (band->channel[ch] < 0) {
                band->channel[ch] = 0;
            }
            total += band->channel[ch];
            band++;
        } while (band < end);
    }
    return total;
}
