/* Movie event handler: "playerDisplayFlagChange" stores the event's flag for a player, "scoreboardReady"
   marks a player ready and runs the ready callback (tr1::function at 0x120). Inlined strcmp as in
   func_8227DBB0. */
typedef struct Impl_822A0360 Impl_822A0360;
struct Impl_822A0360 {
    struct {
        void *f0;
        void (*call)(Impl_822A0360 *self);
    } *vt;
};

typedef struct {
    char pad[0x10];
    Impl_822A0360 *impl;
} Func_822A0360;

typedef struct {
    char pad00[0x14];
    int ready[0x10];
    unsigned int display[0x33];
    Func_822A0360 onReady;
} Obj_822A0360;

typedef struct {
    int f0;
    int f4;
    double index;
    char pad10[0x8];
    unsigned char flag;
} Ev_822A0360;

extern __declspec(noreturn) void fn_82F63108(void);

void fn_822A0360(Obj_822A0360 *o, const unsigned char *p, Ev_822A0360 *ev)
{
    const unsigned char *q = p;
    unsigned char c;
    unsigned char b;
    c = *p;
    b = 0x70;
    if (c == 0x70) {
        int d = (int)"playerDisplayFlagChange" - (int)p;
        do {
            q++;
            if (c == 0) goto match1;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match1:
        o->display[(unsigned int)ev->index] = ev->flag;
        return;
    }
    q = p;
    c = *p;
    b = 0x73;
    if (c == 0x73) {
        int d = (int)"scoreboardReady" - (int)p;
        do {
            q++;
            if (c == 0) goto match2;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match2:
        o->ready[(unsigned int)ev->index] = 1;
        if (o->onReady.impl != 0) {
            Func_822A0360 *f = &o->onReady;
            if (f->impl == 0) {
                fn_82F63108();
            }
            f->impl->vt->call(f->impl);
        }
    }
}
