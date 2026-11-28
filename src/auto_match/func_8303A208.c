typedef struct Voice_8303A350 {
    char pad0[0x24];
    unsigned int pitchA; /* 0x24 */
    unsigned int pitchB; /* 0x28 */
    int dirtyFlags;      /* 0x2c */
    char pad30[0x10];
    unsigned int pitchMode; /* 0x40 */
    float baseRate;         /* 0x44 */
    float cents;            /* 0x48 */
    char pad4c[3];
    unsigned char force; /* 0x4f */
} Voice_8303A350;

extern double fn_82F655D8(double x, double y);

void fn_8303A208(Voice_8303A350 *self, float cents)
{
    float lower = -2400.0f;
    unsigned char force = self->force;
    float upper = 2400.0f;
    float scale = 65536.0f;
    float centsScale = 1.0f / 1200.0f;
    float clamped;

    clamped = cents - lower >= 0.0f ? cents : lower;
    clamped = clamped - upper >= 0.0f ? upper : clamped;
    if (force) {
        float ratio = (float)fn_82F655D8(2.0, clamped * centsScale);
        unsigned int pitch;
        self->cents = clamped;
        self->force = 0;
        self->dirtyFlags = 0x400;
        pitch = (unsigned int)((self->baseRate * ratio) * scale + 0.5);
        self->pitchA = pitch;
        self->pitchB = pitch;
    }
    if (clamped != self->cents) {
        float ratio;
        self->dirtyFlags = 0;
        ratio = (float)fn_82F655D8(2.0, clamped * centsScale);
        self->cents = clamped;
        self->pitchB = (unsigned int)((self->baseRate * ratio) * scale + 0.5);
    }
    if (self->pitchA != self->pitchB) {
        self->pitchMode = 2;
    } else if (self->pitchA == 0x10000) {
        self->pitchMode = 0;
    } else {
        self->pitchMode = 1;
    }
}
