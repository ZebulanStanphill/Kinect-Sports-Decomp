typedef struct Playback_824D7610 Playback_824D7610;

typedef struct PlaybackVtable_824D7610 {
    void *reserved[5];
    float (*progress)(Playback_824D7610 *);
} PlaybackVtable_824D7610;

struct Playback_824D7610 {
    PlaybackVtable_824D7610 *vt;
    char pad4[0x2c];
    float duration;
};

typedef struct State_824D7610 {
    char pad0[0xf0];
    int active;
    int finished;
    char padF8[0x20];
    Playback_824D7610 *playback;
} State_824D7610;

extern int fn_824CCFC8(State_824D7610 *);

int fn_824D7610(State_824D7610 *self, float *out)
{
    if (self->playback != 0 && fn_824CCFC8(self)) {
        float progress = self->playback->vt->progress(self->playback);
        if (self->active != 0 || progress > 0.0f) {
            if (!(progress < 1.0f)) {
                self->active = 1;
                self->finished = 1;
                return 0;
            } else {
                float value;
                if (self->finished)
                    value = 0.95f;
                else
                    value = self->playback->duration * 0.0f + 0.95f;
                *out = value;
                self->active = 0;
                self->finished = 0;
                return 1;
            }
        }
    }
    return 0;
}
