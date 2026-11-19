#define __lwsync() __emit(0x7C2004AC)

/* flags and stack are volatile: the original reads stack only after the
   flags store (the worker thread reads these fields; lwsync fences them). */
typedef struct Worker_8267DF78 {
    char pad0[0x18];
    volatile unsigned int flags; /* 0x18 */
    int pending;                 /* 0x1c */
    volatile unsigned int stack; /* 0x20 */
    char pad24[0x8];
    void *thread;     /* 0x2c */
    unsigned int f30; /* 0x30 */
} Worker_8267DF78;

extern void *lbl_831E7E6C;
extern unsigned char fn_8267F658(Worker_8267DF78 *self, int timeout);
extern void fn_82A1E658(void *handle);
extern void fn_8267C4C8(Worker_8267DF78 *self);
extern void fn_8267DDF8(Worker_8267DF78 *self);
extern void fn_8267C4F0(Worker_8267DF78 *self);
extern void fn_8267DD08(void *inst, Worker_8267DF78 *self);
extern void fn_8267DEF8(void);
extern void *fn_82F6A6C8(void *attrs, unsigned int stack, void *start, void *param, int flags, void *id);

int fn_8267DF78(Worker_8267DF78 *self, int mode)
{
    if (mode == 0) {
        return 0;
    }
    if ((self->pending > 0 || (self->flags & 1) != 0) && fn_8267F658(self, -1) == 0) {
        return 0;
    }
    if (self->thread != 0) {
        fn_82A1E658(self->thread);
        self->thread = 0;
    }
    fn_8267C4C8(self);
    fn_8267DDF8(self);
    self->f30 = 0;
    __lwsync();
    self->pending = 0;
    __lwsync();
    self->flags = mode != 1 ? 8 : 0;
    self->thread = fn_82F6A6C8(0, self->stack, (void *)fn_8267DEF8, self, 0, 0);
    if (self->thread == 0) {
        __lwsync();
        self->flags = 0;
        fn_8267C4F0(self);
        fn_8267DD08(lbl_831E7E6C, self);
        return 0;
    }
    return 1;
}
