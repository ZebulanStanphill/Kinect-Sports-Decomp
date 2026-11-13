typedef struct { unsigned int key; unsigned int cnt; unsigned int pad; } E_8300ECF8;
typedef struct { E_8300ECF8 *begin; E_8300ECF8 *end; int pad; int cs[1]; } Obj_8300ECF8;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned fn_8300EFE8(Obj_8300ECF8 *, unsigned int);

static __inline int Found(Obj_8300ECF8 *m, E_8300ECF8 *p) { return p != m->end; }
static __inline unsigned int *Get(Obj_8300ECF8 *m, E_8300ECF8 *p) { return Found(m, p) ? &p->cnt : 0; }

int fn_8300ECF8(Obj_8300ECF8 *o, unsigned int key)
{
    E_8300ECF8 *e;
    unsigned int *cnt;
    void *cs = o->cs;
    RtlEnterCriticalSection(cs);
    for (e = o->begin; e != o->end && e->key != key; e++) {
    }
    cnt = Get(o, e);
    if (cnt != 0) {
        *cnt = *cnt + 1;
    } else if (fn_8300EFE8(o, key) == 0) {
        RtlLeaveCriticalSection(cs);
        return 0x34;
    }
    RtlLeaveCriticalSection(cs);
    return 1;
}
