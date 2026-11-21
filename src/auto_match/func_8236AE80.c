typedef struct Sound_8236AE80 {
    char pad0[0x4];
    float volume; /* 0x04 */
    char pad8[0x14];
    float paused; /* 0x1c */
} Sound_8236AE80;

typedef struct Fader_8236AE80 {
    char pad0[0x1350];
    unsigned char active; /* 0x1350 */
    char pad1351[0x3];
    float level;           /* 0x1354 */
    float delay;           /* 0x1358 */
    float rate;            /* 0x135c */
    Sound_8236AE80 *sound; /* 0x1360 */
} Fader_8236AE80;

extern const float lbl_821CA45C[2];
extern float lbl_8327F880[8]; /* frame timing; [5] is the frame time */

void fn_8236AE80(Fader_8236AE80 *self)
{
    float one;
    float elapsed;

    if (self->active == 0) {
        return;
    }
    one = lbl_821CA45C[1];
    self->sound->volume = one;
    if (self->sound->paused > 0.0f) {
        elapsed = 0.0f;
    } else {
        elapsed = self->sound->volume * lbl_8327F880[5];
    }
    if (elapsed < self->delay) {
        self->delay -= elapsed;
    } else {
        elapsed -= self->delay;
        self->delay = 0.0f;
        self->level = self->rate * elapsed + self->level;
        if (self->level >= one) {
            self->level = one;
            self->active = 0;
        }
    }
    self->sound->volume = self->level;
}
