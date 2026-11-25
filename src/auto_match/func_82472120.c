typedef struct Cue_82472120 {
    char data[0x1c];
} Cue_82472120;

typedef struct Trigger_82472120 {
    Cue_82472120 cue; /* 0x00 */
    float threshold;  /* 0x1c */
} Trigger_82472120;

typedef struct Tuning_82472120 {
    char pad00[0xc];
    float fadeTime; /* 0x0c */
    char pad10[0x34 - 0x10];
    Trigger_82472120 introA; /* 0x34 */
    Trigger_82472120 introB; /* 0x54 */
    Trigger_82472120 outro;  /* 0x74 */
    char pad94[0xa8 - 0x94];
} Tuning_82472120;

typedef struct Announcer_82472120 {
    int state; /* 0x000 */
    char pad004[0xf34 - 0x4];

    union {
        float value;
        unsigned int bits;
    } timer; /* 0xf34 */

    int padf38;
    float fade; /* 0xf3c */
    char padf40[0xf58 - 0xf40];
    void *mixer;     /* 0xf58 */
    void *introClip; /* 0xf5c */
    void *outroClip; /* 0xf60 */
    char padf64[0xf6c - 0xf64];
    int handle; /* 0xf6c */
    char padf70[0xf7c - 0xf70];
    int introAPlayed; /* 0xf7c */
    int introBPlayed; /* 0xf80 */
    int outroPlayed;  /* 0xf84 */
} Announcer_82472120;

extern Tuning_82472120 lbl_831D3940;

extern void fn_82472370(Announcer_82472120 *self, float dt);
extern void fn_827F62A8(void *clip, float time, unsigned char flag);
extern unsigned char fn_827F21A0(void *mixer, void *clip);
extern void fn_827F2DD0(void *mixer, void *clip, float time, int a, int b);
extern void fn_824732A8(Announcer_82472120 *self, int *handle);
extern float fn_827F6318(void *clip);
extern void fn_82270AC0(Cue_82472120 *cue);
extern int fn_8255FA88(void *clip);
extern void fn_82472D48(Announcer_82472120 *self, int state);

static __forceinline int CountDown(float *timer, float dt)
{
    float left = *timer - dt;

    *timer = -left >= 0.0f ? 0.0f : left;
    return *timer == 0.0f;
}

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

void fn_82472120(Announcer_82472120 *self, float dt)
{
    void *clip;

    fn_82472370(self, dt);
    switch (self->state) {
    case 3:
        if (self->timer.bits != 0 && CountDown(&self->timer.value, dt)) {
            clip = self->outroClip;
            fn_827F62A8(clip, 0.0f, 0);
            if (!fn_827F21A0(self->mixer, clip))
                fn_827F2DD0(self->mixer, clip, 0.0f, 0, 0);
            fn_824732A8(self, &self->handle);
        }
        if (self->outroPlayed == 0 && fn_827F6318(self->outroClip) > lbl_831D3940.outro.threshold) {
            fn_82270AC0(&lbl_831D3940.outro.cue);
            self->outroPlayed = 1;
        }
        if (fn_8255FA88(self->outroClip) != 0)
            fn_82472D48(self, 4);
        break;
    case 0:
        if (self->timer.value - dt < 0.5f && self->timer.value >= 0.5f)
            self->fade = Max(self->timer.value + lbl_831D3940.fadeTime, 0.003f);
        if (self->introAPlayed == 0 && fn_827F6318(self->introClip) > lbl_831D3940.introA.threshold) {
            fn_82270AC0(&lbl_831D3940.introA.cue);
            self->introAPlayed = 1;
        }
        if (self->introBPlayed == 0 && fn_827F6318(self->introClip) > lbl_831D3940.introB.threshold) {
            fn_82270AC0(&lbl_831D3940.introB.cue);
            self->introBPlayed = 1;
        }
        if (self->timer.bits != 0 && CountDown(&self->timer.value, dt))
            fn_82472D48(self, 1);
        break;
    }
}
