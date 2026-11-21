typedef struct Sound_827EFFE8 Sound_827EFFE8;

typedef struct SoundVtbl_827EFFE8 {
    void *slot0;
    void *slot4;
    void *slot8;
    void (*Start)(Sound_827EFFE8 *self); /* 0xc */
} SoundVtbl_827EFFE8;

struct Sound_827EFFE8 {
    SoundVtbl_827EFFE8 *vtbl; /* 0x0 */
    char pad004[0x10c];
    void *voice; /* 0x110 */
    int bank;    /* 0x114 */
    char pad118[4];
    int cue; /* 0x11c */
    char pad120[4];
    unsigned short flags; /* 0x124 */
    char pad126[6];
    unsigned short state; /* 0x12c */
};

extern long lbl_831F13D0;
extern char lbl_831F13E0[];
extern char lbl_8320A3E0[];

extern long _InterlockedExchange(long volatile *target, long value);
extern unsigned int fn_827F3AB0(Sound_827EFFE8 *self);
extern void fn_827F3B90(Sound_827EFFE8 *self, void *buf, unsigned int size);
extern void *fn_827F3C20(Sound_827EFFE8 *self);
extern void fn_827F68F8(void *engine, int bank, Sound_827EFFE8 *self, int cue, unsigned short flags);
extern void fn_827F74C0(void *engine, void *voice);
extern void fn_827F93E8(void *engine);
extern void *fn_82811438(void *buf, int *code, int n);
extern void *fn_82811080(void *heap, unsigned int size, void *desc);
extern void fn_82811238(void *heap, void *obj, void *desc);

void fn_827EFFE8(Sound_827EFFE8 *self)
{
    unsigned int size;
    void *buf;
    unsigned char fromPool;
    unsigned short flags;
    int cue;
    int bank;
    void *voice;
    int code;
    char info[0x20];
    char releaseInfo[0x20];

    size = fn_827F3AB0(self);
    buf = 0;
    fromPool = 0;
    if (size <= 0x19000 && _InterlockedExchange(&lbl_831F13D0, 1) == 0) {
        fromPool = 1;
        buf = lbl_831F13E0;
    }
    if (!fromPool) {
        code = 0;
        fn_82811438(info, &code, 0x10);
        buf = fn_82811080(lbl_8320A3E0, size, info);
    }
    fn_827F3B90(self, buf, size);
    self->vtbl->Start(self);
    if (self->voice != 0) {
        flags = self->flags;
        cue = self->cue;
        bank = self->bank;
        fn_827F68F8(fn_827F3C20(self), bank, self, cue, flags);
        voice = self->voice;
        fn_827F74C0(fn_827F3C20(self), voice);
        fn_827F93E8(fn_827F3C20(self));
    }
    self->state &= ~1;
    fn_827F3B90(self, 0, 0);
    if (fromPool) {
        _InterlockedExchange(&lbl_831F13D0, 0);
    } else {
        code = 3;
        fn_82811238(lbl_8320A3E0, buf, fn_82811438(releaseInfo, &code, 0x10));
    }
}
