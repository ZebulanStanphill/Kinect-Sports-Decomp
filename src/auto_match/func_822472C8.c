typedef struct Flow_822472C8 Flow_822472C8;

typedef struct FlowVtbl_822472C8 {
    void *slots[2];
    char *(*GetContext)(Flow_822472C8 *self); /* 0x8 */
} FlowVtbl_822472C8;

struct Flow_822472C8 {
    FlowVtbl_822472C8 *vt; /* 0x0 */
    char pad4[0xc];
    void *session; /* 0x10 */
};

typedef struct Timer_822472C8 {
    char pad0[0x14];
    unsigned int start; /* 0x14 */
    char pad18[4];
    unsigned int elapsed; /* 0x1c */
    unsigned int paused;  /* 0x20 */
    unsigned int total;   /* 0x24 */
    unsigned int current; /* 0x28 */
} Timer_822472C8;

extern unsigned char fn_828ACCE8(void *session);
extern unsigned char fn_828AD740(void *session);
extern unsigned char fn_828A1C28(void *session);
extern void fn_828A1C20(void *session);
extern void fn_828B0348(void *session);
extern void fn_82247890(Flow_822472C8 *flow);
extern void fn_822474A8(Flow_822472C8 *flow);
extern unsigned int fn_82248C08(char *clock);
extern Timer_822472C8 *fn_8225F160(void);

void fn_822472C8(Flow_822472C8 *self, int event)
{
    unsigned char ready;
    unsigned char pending;
    unsigned int now;
    Timer_822472C8 *timer;

    ready = fn_828ACCE8(self->session) && fn_828AD740(self->session);
    switch (event) {
    case 1:
        fn_82247890(self);
        break;
    case 2:
        pending = ready && fn_828A1C28(self->session);
        if (pending) {
            fn_828B0348(self->session);
        }
        break;
    case 3:
        if (ready) {
            fn_822474A8(self);
        }
        fn_828A1C20(self->session);
        break;
    case 4:
        if (!ready) {
            now = fn_82248C08(self->vt->GetContext(self) + 0x240);
            timer = fn_8225F160();
            timer->start = now;
            timer->elapsed = 0;
            timer->paused = 0;
            timer->total = 0;
            timer->current = now;
        }
        break;
    }
}
