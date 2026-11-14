typedef struct Voice_8300A650 Voice_8300A650;
typedef struct {
    void (*setVolume)(Voice_8300A650 *, int flags, float volume, int now);
} VoiceVt_8300A650;

struct Voice_8300A650 {
    VoiceVt_8300A650 *vt;
    int pad4;
    void *handle;
    float volume;
};

typedef struct Entry_8300A650 Entry_8300A650;
struct Entry_8300A650 {
    Entry_8300A650 *next;
    unsigned int id;
    Voice_8300A650 voice;
};

typedef struct {
    char pad0[0x7c];
    Entry_8300A650 *entries;
} Bank_8300A650;

typedef struct {
    void **voice;
    int flags;
    float from;
    float to;
    int time;
    int curve;
    unsigned char active;
} Fade_8300A650;

extern void *lbl_832642F4;
extern void fn_82FF5400(void *mgr, void *handle, int flags, float value, int time, int curve, int mode);
extern void *fn_82FF59A8(void *mgr, Fade_8300A650 *fade, int a, int b);

static __forceinline void SetVolume_8300A650(Voice_8300A650 *v, int flags, float volume, int time, int curve, int mode)
{
    Fade_8300A650 fade;
    if (v->handle != 0) {
        fade.to = volume;
        fn_82FF5400(lbl_832642F4, v->handle, flags, volume, time, curve, mode);
    }
    if (v->handle == 0) {
        fade.from = v->volume;
        fade.to = volume;
        if (time == 0) {
            v->vt->setVolume(v, flags, fade.to, mode);
        } else {
            fade.curve = curve;
            fade.time = time;
            fade.flags = flags;
            fade.active = 1;
            fade.voice = (void **)v;
            v->handle = fn_82FF59A8(lbl_832642F4, &fade, 1, 0);
        }
    }
}

static __forceinline Voice_8300A650 *Find_8300A650(Bank_8300A650 *self, unsigned int id)
{
    Entry_8300A650 *e;
    for (e = self->entries; e != 0; e = e->next) {
        if (e->id == id)
            return &e->voice;
    }
    return 0;
}

int fn_8300A650(Bank_8300A650 *self, unsigned int id)
{
    Voice_8300A650 *v = Find_8300A650(self, id);
    if (v != 0)
        SetVolume_8300A650(v, 0x10000, v->volume, 0, 4, 1);
    return 1;
}
