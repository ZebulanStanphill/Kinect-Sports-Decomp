typedef struct Mix_824107D0 {
    char pad0[0x10];
    unsigned int flags[4]; /* 0x10 */
    char pad1[0x2c - 0x20];
    float current; /* 0x2C */
} Mix_824107D0;

typedef struct Voice_824107D0 {
    char pad0[0x1d0];
    Mix_824107D0 mix; /* 0x1D0 */
} Voice_824107D0;

typedef struct Settings_824107D0 {
    char pad0[0xcb8];
    int enabled; /* 0xCB8 */
} Settings_824107D0;

typedef struct Fader_824107D0 {
    char pad0[0x24];
    Settings_824107D0 **settings; /* 0x24 */
    Voice_824107D0 *voice;        /* 0x28 */
} Fader_824107D0;

extern float lbl_831D1710[];
extern float lbl_831D9FE4;
extern void fn_8252AF80(Voice_824107D0 *self, int index, float value);

static __forceinline void SetFlag(Mix_824107D0 *m, int index, unsigned char on)
{
    if (on)
        m->flags[index] |= 0x20;
    else
        m->flags[index] &= ~0x20;
}

void fn_824107D0(Fader_824107D0 *self)
{
    float current;
    float value;

    if ((*self->settings)->enabled == 0) {
        return;
    }
    current = self->voice->mix.current;
    if (current != 0.3f) {
        value = (0.3f - current) * lbl_831D1710[0x24] + current;
        if (value >= 0.29000002f && value <= lbl_831D9FE4) {
            value = 0.3f;
        }
        fn_8252AF80(self->voice, 0, value);
        SetFlag(&self->voice->mix, 0, value < 0.99f);
    }
}
