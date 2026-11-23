typedef struct History_82E91F20 {
    char pad0[0x28];
    float samples[21]; /* 0x28 */
    float pad7C;       /* 0x7c */
    float peak;        /* 0x80 */
    int index;         /* 0x84 */
} History_82E91F20;

void fn_82E91F20(History_82E91F20 *self)
{
    int i;
    float sample;

    self->peak = self->samples[(self->index + 1) % 21];
    for (i = 0; i < 14; i++) {
        sample = self->samples[(self->index + i + 2) % 21];
        if (self->peak < sample) {
            self->peak = sample;
        }
    }
}
