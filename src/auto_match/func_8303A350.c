typedef struct Voice_8303A350 {
    char pad0[0x24];
    unsigned int pitchA; /* 0x24 */
    unsigned int pitchB; /* 0x28 */
    int dirtyFlags;      /* 0x2c */
    char pad30[0x14];
    float baseRate; /* 0x44 */
    float cents;    /* 0x48 */
    char pad4C[0x3];
    unsigned char force; /* 0x4f */
} Voice_8303A350;

extern const float lbl_8217D2FC;
extern const float lbl_8217D300;
extern double fn_82F655D8(double x, double y);

void fn_8303A350(Voice_8303A350 *self, float cents)
{
    float clamped;
    float ratio;
    unsigned int pitch;

    if (self->force != 0 || cents != self->cents) {
        clamped = cents - lbl_8217D300 >= 0.0f ? cents : lbl_8217D300;
        clamped = clamped - lbl_8217D2FC >= 0.0f ? lbl_8217D2FC : clamped;
        ratio = (float)fn_82F655D8(2.0, clamped * (1.0f / 1200.0f));
        self->cents = clamped;
        pitch = (unsigned int)(65536.0f * (self->baseRate * ratio) + 0.5);
        self->dirtyFlags = 0x400;
        self->pitchA = pitch;
        self->pitchB = pitch;
    }
}
