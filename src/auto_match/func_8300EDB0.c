typedef unsigned int uint;
typedef struct { uint key; uint cnt; uint pad; } E_8300EDB0;
typedef struct { E_8300EDB0 *begin; E_8300EDB0 *end; int pad; int cs[1]; } Obj_8300EDB0;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_8301B2D0(Obj_8300EDB0 *, uint);

static __inline int Found(Obj_8300EDB0 *m, E_8300EDB0 *p) { return p != m->end; }
static __inline uint *Get(Obj_8300EDB0 *m, E_8300EDB0 *p) { return Found(m, p) ? &p->cnt : 0; }

void fn_8300EDB0(Obj_8300EDB0 *o, uint key)
{
    E_8300EDB0 *e;
    uint *cnt;
    void *cs = o->cs;
    RtlEnterCriticalSection(cs);
    for (e = o->begin; e != o->end && e->key != key; e++) {
    }
    cnt = Get(o, e);
    if (cnt != 0) {
        if (*cnt <= 1) {
            fn_8301B2D0(o, key);
            RtlLeaveCriticalSection(cs);
            return;
        }
        *cnt = *cnt - 1;
    }
    RtlLeaveCriticalSection(cs);
}
