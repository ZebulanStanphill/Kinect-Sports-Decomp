typedef struct Params_830072D0 {
    int pad0;          /* 0x00 */
    float volume;      /* 0x04 */
    float pitch;       /* 0x08 */
    float pan;         /* 0x0c */
    float filter;      /* 0x10 */
    void *volumeVoice; /* 0x14 */
    void *panVoice;    /* 0x18 */
    void *pitchVoice;  /* 0x1c */
    void *filterVoice; /* 0x20 */
} Params_830072D0;

typedef struct Emitter_830072D0 Emitter_830072D0;

typedef struct EmitterVtbl_830072D0 {
    void *slots[20];
    void (*Update)(Emitter_830072D0 *self); /* 0x50 */
} EmitterVtbl_830072D0;

struct Emitter_830072D0 {
    EmitterVtbl_830072D0 *vtbl; /* 0x00 */
    char pad4[0x20 - 0x4];
    Params_830072D0 *params; /* 0x20 */
};

extern void *lbl_832642F4;

extern int fn_83006E68(Emitter_830072D0 *self);
extern unsigned char fn_830069B8(Emitter_830072D0 *self);
extern void fn_830043E8(Emitter_830072D0 *self);
extern float fn_8302AEF0(int source);
extern float fn_8302AFA0(int source);
extern float fn_8302B050(int source);
extern float fn_8302B100(int source);
extern void fn_82FF5400(void *mgr, void *handle, int flags, float value, int time, int curve, int mode);

void fn_830072D0(Emitter_830072D0 *self)
{
    unsigned int source;
    float value;

    source = fn_83006E68(self);
    if (source != 0 && fn_830069B8(self)) {
        if (self->params->volumeVoice != 0) {
            value = fn_8302AEF0(source);
            fn_82FF5400(lbl_832642F4, self->params->volumeVoice, 0x10000, value, 0, 4, 0);
        } else {
            self->params->volume = fn_8302AEF0(source);
        }
        if (self->params->panVoice != 0) {
            value = fn_8302AFA0(source);
            fn_82FF5400(lbl_832642F4, self->params->panVoice, 0x20000, value, 0, 4, 0);
        } else {
            self->params->pan = fn_8302AFA0(source);
        }
        if (self->params->filterVoice != 0) {
            value = fn_8302B050(source);
            fn_82FF5400(lbl_832642F4, self->params->filterVoice, 0x40000, value, 0, 4, 0);
        } else {
            self->params->filter = fn_8302B050(source);
        }
        if (self->params->pitchVoice != 0) {
            value = fn_8302B100(source);
            fn_82FF5400(lbl_832642F4, self->params->pitchVoice, 0x80000, value, 0, 4, 0);
        } else {
            self->params->pitch = fn_8302B100(source);
        }
    } else if (self->params != 0) {
        fn_830043E8(self);
        self->params->volume = 0.0f;
        self->params->pan = 0.0f;
        self->params->filter = 0.0f;
        self->params->pitch = 0.0f;
    }
    self->vtbl->Update(self);
}
