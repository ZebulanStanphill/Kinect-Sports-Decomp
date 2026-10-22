typedef struct Obj Obj;
typedef struct Ref Ref;
typedef struct {
    void *f0;
    Ref *(*get_ref)(Ref *out, Obj *o);
} ObjVtbl;
struct Obj { ObjVtbl *vt; };

typedef struct RefObj RefObj;
typedef struct {
    void *f0;
    void *f4;
    void (*release)(RefObj *p, int x);
} RefVtbl;
struct RefObj { RefVtbl *vt; };

struct Ref {
    RefObj *p;
    int x;
};

typedef struct {
    int state;
    Obj *obj;
    int pad[2];
} Entry;

typedef struct {
    Entry *entries;
} Map;

typedef struct {
    char pad0[0xc];
    char cs[0x1c];
    Map map;
} Mgr;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_82686758(Map *m, Ref *key);
extern void fn_82686608(Map *m, Ref *key);

static Entry *find(Map *m, Ref *k)
{
    int i = fn_82686758(m, k);
    if (i >= 0) {
        return &m->entries[i + 1];
    }
    return 0;
}

static void erase(Map *m, Ref *k)
{
    fn_82686608(m, k);
}

void fn_826876D8(Mgr *mgr, Obj *obj)
{
    Entry *e;
    Ref r1;
    Ref r2;

    RtlEnterCriticalSection(mgr->cs);
    e = find(&mgr->map, (*obj->vt->get_ref)(&r1, obj));
    if (r1.p != 0) {
        (*r1.p->vt->release)(r1.p, r1.x);
    }
    if (e != 0 && e->state == 0 && e->obj == obj) {
        erase(&mgr->map, (*obj->vt->get_ref)(&r2, obj));
        if (r2.p != 0) {
            (*r2.p->vt->release)(r2.p, r2.x);
        }
    }
    RtlLeaveCriticalSection(mgr->cs);
}
