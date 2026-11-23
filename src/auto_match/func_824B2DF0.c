typedef struct Stats_824B2DF0 {
    char pad00[0x1c];
    float current; /* 0x1C */
    char pad20[0x48];
    float average; /* 0x68 */
    float peak;    /* 0x6C */
    char pad70[0x4];
    unsigned int samples; /* 0x74 */
    int started;          /* 0x78 */
} Stats_824B2DF0;

typedef struct Meter_824B2DF0 {
    char pad00[0x3c];
    Stats_824B2DF0 *stats; /* 0x3C */
} Meter_824B2DF0;

extern void fn_824B2FA0(Meter_824B2DF0 *self);
extern float fn_824B3A40(Meter_824B2DF0 *self);
extern void fn_824B3C70(Meter_824B2DF0 *self);

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

void fn_824B2DF0(Meter_824B2DF0 *self)
{
    float value;

    fn_824B2FA0(self);
    value = fn_824B3A40(self);
    if (self->stats->started != 0) {
        self->stats->current = Max(value, self->stats->current);
    } else {
        self->stats->current = value;
    }
    self->stats->peak = Max(self->stats->peak, self->stats->current);
    self->stats->samples++;
    self->stats->average += self->stats->current / (float)self->stats->samples;
    fn_824B3C70(self);
}
