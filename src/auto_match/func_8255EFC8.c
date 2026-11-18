typedef struct Sound_8255EFC8 {
    char pad000[0x110];
    void *voice; /* 0x110 */
    int bank;    /* 0x114 */
    char pad118[4];
    int cue; /* 0x11c */
    char pad120[4];
    unsigned short flags; /* 0x124 */
    char pad126[6];
    unsigned short state; /* 0x12c */
} Sound_8255EFC8;

extern char lbl_8320A3E0[];

extern long _InterlockedExchange(long volatile *target, long value);
extern void *fn_827F3C20(Sound_8255EFC8 *self);
extern void fn_827F68F8(void *engine, int bank, Sound_8255EFC8 *self, int cue, unsigned short flags);
extern void fn_827F74C0(void *engine, void *voice);
extern void fn_827F93E8(void *engine);
extern long *fn_827EFC80(void);
extern void *fn_82811438(void *buf, int *code, int n);
extern void *fn_827F3C08(Sound_8255EFC8 *self);
extern void fn_82811238(void *ctx, void *obj, void *str);
extern void fn_827F3B90(Sound_8255EFC8 *self, void *buf, unsigned int size);

void fn_8255EFC8(Sound_8255EFC8 *self, int immediate)
{
    unsigned short flags;
    int cue;
    int bank;
    void *voice;
    int code;
    char buf[0x20];

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
    if (immediate != 0) {
        _InterlockedExchange(fn_827EFC80(), 0);
    } else {
        code = 3;
        fn_82811238(lbl_8320A3E0, fn_827F3C08(self), fn_82811438(buf, &code, 0x10));
    }
    fn_827F3B90(self, 0, 0);
}
