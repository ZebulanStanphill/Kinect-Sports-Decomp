typedef unsigned int uint;
typedef struct { uint key; uint cnt; uint pad; } E_8300ECF8;
typedef struct { E_8300ECF8 *begin; E_8300ECF8 *end; int pad; int cs[1]; } Obj_8300ECF8;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned fn_8300EFE8(Obj_8300ECF8 *, uint);

static __inline int Found(Obj_8300ECF8 *m, E_8300ECF8 *p) { return p != m->end; }
static __inline uint *Get(Obj_8300ECF8 *m, E_8300ECF8 *p) { return Found(m, p) ? &p->cnt : 0; }

int fn_8300ECF8(Obj_8300ECF8 *o, uint key)
{
    E_8300ECF8 *e;
    uint *cnt;
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
