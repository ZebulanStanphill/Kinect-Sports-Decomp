typedef struct Timeline_826C80C8 Timeline_826C80C8;

typedef struct Interface_826C80C8 {
    struct {
        void *reserved[2];
        int (*kind)(void *);
    } *vt;
} Interface_826C80C8;

typedef struct Clip_826C80C8 {
    struct {
        void *reserved[5];
        void (*stop)(void *, int);
    } *vt;

    char pad0[0x10];
    int frame;
    char pad1[8];
    Timeline_826C80C8 *timeline;
    char pad2[0x44];
    Interface_826C80C8 interface;
} Clip_826C80C8;

typedef struct Call_826C80C8 {
    char pad0[8];
    Interface_826C80C8 *self;
    char pad1[12];
    char *env;
    int argc;
} Call_826C80C8;

extern unsigned char *fn_826957D0(Call_826C80C8 *call, unsigned int index);
extern double fn_826972E0(void *value, void *env);
extern unsigned char fn_826998A8(void *timeline, int from, int to);
extern void fn_826A7288(int env, unsigned int clip);
extern Clip_826C80C8 *fn_826AE1D8(void *env, void *value);

void fn_826C80C8(Call_826C80C8 *call)
{
    Clip_826C80C8 *self;
    Clip_826C80C8 *other;
    Clip_826C80C8 *target;
    Timeline_826C80C8 *timeline;
    unsigned char *arg;
    unsigned char numeric;
    int frame;

    Interface_826C80C8 *interface = call->self;

    if (interface == 0) {
        self = *(Clip_826C80C8 **)(call->env + 0x74);
    } else {
        int kind = interface->vt->kind(interface);
        unsigned char valid = kind >= 2 && kind <= 5;
        if (!valid)
            return;
        self = call->self ? (Clip_826C80C8 *)((char *)call->self - 0x68) : 0;
    }
    if (!self || call->argc < 1)
        return;

    timeline = self->timeline;
    arg = fn_826957D0(call, 0);
    other = 0;
    target = self->interface.vt->kind(&self->interface) == 2 ? self : 0;
    numeric = *arg == 3 || *arg == 4;
    if (numeric) {
        frame = (int)fn_826972E0(arg, call->env) + 0x4000;
        if (frame < 0)
            return;
        if (frame > 0x7efffffd)
            return;
    } else {
        if (target) {
            unsigned int prior = *(unsigned int *)(call->env + 0x74);
            fn_826A7288((int)call->env, (unsigned int)target);
            other = fn_826AE1D8(call->env, arg);
            fn_826A7288((int)call->env, prior);
        } else {
            other = fn_826AE1D8(call->env, arg);
        }
        if (!other || other == self || timeline != other->timeline)
            return;
        frame = other->frame;
    }

    if (self->frame < 0)
        return;
    self->vt->stop(self, 0);
    if (timeline && fn_826998A8((char *)timeline + 0xa8, self->frame, frame)) {
        char *owner = *(char **)((char *)timeline + 0xa0);
        *(unsigned int *)(owner + 0xb00) |= 0x400;
        if (other)
            other->vt->stop(other, 0);
    }
}
