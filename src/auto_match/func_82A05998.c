typedef struct Stat_82A05998 {
    float peak;         /* 0x00 */
    unsigned int count; /* 0x04 */
    float average;      /* 0x08 */
} Stat_82A05998;

typedef struct Self_82A05998 {
    char pad0[0x90];
    Stat_82A05998 stats[7]; /* 0x90 */
} Self_82A05998;

extern float lbl_8315CD38[7];

void fn_82A05998(Self_82A05998 *self, float key, float sample, unsigned int mode)
{
    unsigned int bucket;
    unsigned int i;
    float peak;

    if (mode == 0) {
        return;
    }
    bucket = 6;
    for (i = 0; i < 7; i++) {
        if (key < lbl_8315CD38[i]) {
            bucket = i;
            break;
        }
    }
    if (mode > 1) {
        if (sample > self->stats[bucket].peak) {
            self->stats[bucket].peak = sample;
        }
        return;
    }
    peak = self->stats[bucket].peak;
    if (sample > peak * 0.7f) {
        unsigned int count = self->stats[bucket].count;
        self->stats[bucket].count = count + 1;
        self->stats[bucket].average =
            ((float)count * self->stats[bucket].average + sample) / (float)(count + 1);
        if (sample > peak) {
            self->stats[bucket].peak = sample;
        }
    }
}
