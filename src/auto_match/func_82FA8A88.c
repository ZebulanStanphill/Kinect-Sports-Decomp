typedef struct Voice_82FA8A88 Voice_82FA8A88;

typedef struct VoiceVtbl_82FA8A88 {
    void (*SetVolume)(Voice_82FA8A88 *self, int flags, float volume, int now);
} VoiceVtbl_82FA8A88;

struct Voice_82FA8A88 {
    VoiceVtbl_82FA8A88 *vt;
    void *handle; /* 0x4 */
};

typedef struct Target_82FA8A88 Target_82FA8A88;

typedef struct TargetVtbl_82FA8A88 {
    void *slot0;
    void (*Stop)(Target_82FA8A88 *self, int arg); /* 0x4 */
} TargetVtbl_82FA8A88;

struct Target_82FA8A88 {
    TargetVtbl_82FA8A88 *vt;
};

typedef struct Sound_82FA8A88 {
    void *vt;
    Target_82FA8A88 target; /* 0x4 */
    unsigned char pad8[0x18 - 0x8];
    Voice_82FA8A88 voice; /* 0x18 */
    unsigned char pad20[0x24 - 0x20];
    unsigned char flags; /* 0x24 */
} Sound_82FA8A88;

typedef struct FadeParams_82FA8A88 {
    int time;  /* 0x0 */
    int curve; /* 0x4 */
} FadeParams_82FA8A88;

typedef struct Fade_82FA8A88 {
    Voice_82FA8A88 *voice; /* 0x0 */
    int flags;             /* 0x4 */
    float from;            /* 0x8 */
    float to;              /* 0xc */
    int time;              /* 0x10 */
    int curve;             /* 0x14 */
    unsigned char active;  /* 0x18 */
} Fade_82FA8A88;

extern void *lbl_832642F4;
extern const float lbl_8216C698;
extern void fn_82FF5400(void *mgr, void *handle, int flags, float value, int time, int curve, int mode);
extern void *fn_82FF59A8(void *mgr, Fade_82FA8A88 *fade, int a, int b);

int fn_82FA8A88(Sound_82FA8A88 *self, FadeParams_82FA8A88 *params, int arg)
{
    Fade_82FA8A88 fade;

    if (self->voice.handle != 0) {
        fn_82FF5400(lbl_832642F4, self->voice.handle, 0x2000000, lbl_8216C698, params->time, params->curve,
                    0);
    } else if (params->time > 0) {
        fade.time = params->time;
        fade.flags = 0x2000000;
        fade.curve = params->curve;
        fade.voice = &self->voice;
        fade.from = 0.0f;
        fade.active = 1;
        fade.to = lbl_8216C698;
        self->voice.handle = fn_82FF59A8(lbl_832642F4, &fade, 1, 0);
        self->flags |= 0x80;
        if (self->voice.handle == 0)
            self->voice.vt->SetVolume(&self->voice, fade.flags, fade.to, 1);
    } else {
        self->target.vt->Stop(&self->target, arg);
    }
    return 1;
}
