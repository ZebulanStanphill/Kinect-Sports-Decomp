typedef struct Rel Rel;
typedef struct {
    void *f0[3];
    void (*release)(Rel *r);
} RelVtbl;
struct Rel { RelVtbl *vt; };

typedef struct {
    char pad[0x190];
    int cs[7];
    int f1ac;
    int f1b0;
} Mgr;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_827DFB88(Mgr *m, void *item);
extern void fn_827E2500(void *item);
extern void fn_827E25C8(void *item);
extern unsigned short fn_827E25F8(void *item);
extern void fn_827E26D0(void *item);

unsigned short fn_827DFF58(Mgr *m, void *item, Rel *r)
{
    unsigned short refs;

    RtlEnterCriticalSection(m->cs);
    fn_827E25C8(item);
    refs = fn_827E25F8(item);
    if (refs == 0) {
        m->f1ac--;
        fn_827DFB88(m, item);
        if (r != 0) {
            r->vt->release(r);
        }
        if (item != 0) {
            fn_827E26D0(item);
            fn_827E2500(item);
        }
        m->f1b0--;
    }
    RtlLeaveCriticalSection(m->cs);
    return refs;
}
