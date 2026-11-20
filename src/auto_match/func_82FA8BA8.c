typedef struct Voice_82FA8BA8 Voice_82FA8BA8;

typedef struct VoiceVtbl_82FA8BA8 {
    void (*SetVolume)(Voice_82FA8BA8 *self, int flags, float volume, int now);
} VoiceVtbl_82FA8BA8;

struct Voice_82FA8BA8 {
    VoiceVtbl_82FA8BA8 *vt;
};

typedef struct Sound_82FA8BA8 {
    void *vt;
    void *target; /* 0x4 */
    unsigned char pad8[0x18 - 0x8];
    Voice_82FA8BA8 voice; /* 0x18 */
    void *volumeHandle;   /* 0x1c */
    void *pitchHandle;    /* 0x20 */
    unsigned char flags;  /* 0x24 */
    unsigned char pad25[0x30 - 0x25];
    unsigned short pauses; /* 0x30 */
} Sound_82FA8BA8;

typedef struct FadeParams_82FA8BA8 {
    int time;  /* 0x0 */
    int curve; /* 0x4 */
} FadeParams_82FA8BA8;

typedef struct Fade_82FA8BA8 {
    Voice_82FA8BA8 *voice; /* 0x0 */
    int flags;             /* 0x4 */
    float from;            /* 0x8 */
    float to;              /* 0xc */
    int time;              /* 0x10 */
    int curve;             /* 0x14 */
    unsigned char active;  /* 0x18 */
} Fade_82FA8BA8;

extern void *lbl_832642F4;
extern const float lbl_8216C698;
extern void fn_82FF5400(void *mgr, void *handle, int flags, float value, int time, int curve, int mode);
extern void *fn_82FF59A8(void *mgr, Fade_82FA8BA8 *fade, int a, int b);

int fn_82FA8BA8(Sound_82FA8BA8 *self, FadeParams_82FA8BA8 *params)
{
    Fade_82FA8BA8 fade;

    self->pauses++;
    if (self->pitchHandle != 0) {
        fn_82FF5400(lbl_832642F4, self->pitchHandle, 0x4000000, lbl_8216C698, params->time, params->curve, 0);
    } else {
        fade.flags = 0x4000000;
        fade.time = params->time;
        fade.voice = &self->voice;
        fade.from = 0.0f;
        fade.curve = params->curve;
        fade.to = lbl_8216C698;
        fade.active = 1;
        self->pitchHandle = fn_82FF59A8(lbl_832642F4, &fade, 1, 0);
        self->flags |= 0x40;
        if (self->pitchHandle == 0) {
            self->voice.vt->SetVolume(&self->voice, fade.flags, fade.to, 1);
        }
    }
    return 1;
}
