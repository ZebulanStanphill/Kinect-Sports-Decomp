typedef struct Obj Obj;
struct Inner {
    char pad[0x458];
    unsigned int a458;
    unsigned int a45c;
};
struct Obj {
    char pad[0x100];
    struct Inner *inner;
};
typedef struct Mgr {
    char cs[0x1c];
    Obj *obj;
    int state;
    int pad24;
    int pad28;
    void (*fn)(void);
    int busy;
    int failed;
} Mgr;
extern int fn_824B9EC0(Mgr *m, Obj *o);
extern unsigned char fn_82512508(Obj *o);
extern unsigned char fn_828EA5F8(Obj *o);
extern unsigned char fn_828EA610(Obj *o);
extern void fn_824BA208(void);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

void fn_824B9C60(Mgr *m, Obj *o)
{
    if (o != 0) {
        if (!fn_828EA610(o)) {
            if (fn_828EA5F8(o)) {
                if (o->inner->a458 != 1) {
                    o->inner->a458 = 1;
                }
                RtlEnterCriticalSection(m);
                if (m->busy != 0) {
                    m->failed = 1;
                    RtlLeaveCriticalSection(m);
                } else {
                    RtlLeaveCriticalSection(m);
                    if (fn_82512508(o) && fn_824B9EC0(m, o) != 0) {
                        m->obj = o;
                        m->busy = 1;
                        m->state = 0x116;
                        m->fn = fn_824BA208;
                    } else {
                        m->failed = 1;
                    }
                }
            }
        }
    }
}
