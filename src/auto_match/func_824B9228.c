typedef struct Obj_824B9228 {
    char cs[0x1c];
    void *target;
    int index;
    unsigned int mode;
    int alt;
    void *callback;
    int busy;
    int failed;
} Obj_824B9228;

typedef struct Target_824B9228 {
    char pad[0x100];
    unsigned int *flags;
} Target_824B9228;

extern int fn_824B9370(Obj_824B9228 *o, Target_824B9228 *t, unsigned int mode, int alt, int arg);
extern unsigned char fn_82512508(Target_824B9228 *t);
extern unsigned char fn_828EA5F8(Target_824B9228 *t);
extern unsigned char fn_828EA610(Target_824B9228 *t);
extern void fn_824B9850(void);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

void fn_824B9228(Obj_824B9228 *o, Target_824B9228 *t, unsigned int mode, int alt)
{
    int idx;
    int arg;

    if (t == 0)
        return;
    if (fn_828EA610(t) != 0)
        return;
    if (fn_828EA5F8(t) == 0)
        return;

    arg = 0;
    if (alt != 0) {
        idx = 0x10d;
        arg = 0x42;
    } else {
        switch (mode) {
        case 3:
            idx = 0x10e;
            arg = 99;
            break;
        case 2:
            idx = 0x10c;
            arg = 0x21;
            break;
        case 1:
            idx = 0x10f;
            arg = 0x84;
            break;
        case 0:
            idx = 0x10b;
            break;
        default:
            return;
        }
    }

    if (t->flags[idx] != 1)
        t->flags[idx] = 1;

    RtlEnterCriticalSection(o);
    if (o->busy != 0) {
        o->failed = 1;
        RtlLeaveCriticalSection(o);
    } else {
        RtlLeaveCriticalSection(o);
        if (fn_82512508(t) != 0 && fn_824B9370(o, t, mode, alt, arg) != 0) {
            o->index = idx;
            o->target = t;
            o->mode = mode;
            o->alt = alt;
            o->busy = 1;
            o->callback = (void *)fn_824B9850;
        } else {
            o->failed = 1;
        }
    }
}
