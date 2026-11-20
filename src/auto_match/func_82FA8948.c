typedef struct Voice_82FA8948 Voice_82FA8948;

typedef struct VoiceVtbl_82FA8948 {
    void (*SetVolume)(Voice_82FA8948 *self, int flags, float volume, int now);
} VoiceVtbl_82FA8948;

struct Voice_82FA8948 {
    VoiceVtbl_82FA8948 *vt;
};

typedef struct Target_82FA8948 Target_82FA8948;

typedef struct TargetVtbl_82FA8948 {
    void (*Stop)(Target_82FA8948 *self, int arg); /* 0x0 */
} TargetVtbl_82FA8948;

struct Target_82FA8948 {
    TargetVtbl_82FA8948 *vt;
};

typedef struct FadeHandle_82FA8948 {
    unsigned char pad0[0x18];
    float elapsed; /* 0x18 */
} FadeHandle_82FA8948;

typedef struct Sound_82FA8948 {
    void *vt;
    Target_82FA8948 target; /* 0x4 */
    unsigned char pad8[0x18 - 0x8];
    Voice_82FA8948 voice;              /* 0x18 */
    FadeHandle_82FA8948 *volumeHandle; /* 0x1c */
    void *pitchHandle;                 /* 0x20 */
    unsigned char flags;               /* 0x24 */
} Sound_82FA8948;

typedef struct FadeParams_82FA8948 {
    int time;   /* 0x0 */
    int curve;  /* 0x4 */
    int offset; /* 0x8 */
} FadeParams_82FA8948;

typedef struct Fade_82FA8948 {
    Voice_82FA8948 *voice; /* 0x0 */
    int flags;             /* 0x4 */
    float from;            /* 0x8 */
    float to;              /* 0xc */
    int time;              /* 0x10 */
    int curve;             /* 0x14 */
    unsigned char active;  /* 0x18 */
} Fade_82FA8948;

extern void *lbl_832642F4;
extern const float lbl_8216C698;
extern void fn_82FF5400(void *mgr, void *handle, int flags, float value, int time, int curve, int mode);
extern FadeHandle_82FA8948 *fn_82FF59A8(void *mgr, Fade_82FA8948 *fade, int a, int b);

int fn_82FA8948(Sound_82FA8948 *self, FadeParams_82FA8948 *params, int arg)
{
    Fade_82FA8948 fade;

    if (self->volumeHandle != 0) {
        fn_82FF5400(lbl_832642F4, self->volumeHandle, 0x1000000, 0.0f, params->time, params->curve, 0);
    } else if (params->time > 0) {
        fade.time = params->time;
        fade.flags = 0x1000000;
        fade.curve = params->curve;
        fade.voice = &self->voice;
        fade.from = lbl_8216C698;
        fade.active = 1;
        fade.to = 0.0f;
        self->volumeHandle = fn_82FF59A8(lbl_832642F4, &fade, 1, 0);
        self->flags |= 0x80;
        if (self->volumeHandle == 0) {
            self->voice.vt->SetVolume(&self->voice, fade.flags, fade.to, 1);
        } else if (params->offset != 0) {
            self->volumeHandle->elapsed += params->offset / 1024;
        }
    }
    self->target.vt->Stop(&self->target, arg);
    return 1;
}
