typedef struct Mixer_825CEA70 {
    char pad0[0x24];
    float levelA; /* 0x24 */
    float levelB; /* 0x28 */
    int useA;     /* 0x2c */
} Mixer_825CEA70;

static __forceinline float Clamp01(float value)
{
    value = value >= 0.0f ? value : 0.0f;
    return value - 1.0f >= 0.0f ? 1.0f : value;
}

void fn_825CEA70(Mixer_825CEA70 *self, float level)
{
    if (self->useA != 0) {
        self->levelA = Clamp01(level);
    } else {
        self->levelB = Clamp01(level);
    }
}
