long _InterlockedIncrement(long volatile *);
long _InterlockedDecrement(long volatile *);

typedef struct Rep_825226C8 Rep_825226C8;
typedef struct RepVt_825226C8 {
    void (*destroy)(Rep_825226C8 *);
    void (*deleteThis)(Rep_825226C8 *);
} RepVt_825226C8;
struct Rep_825226C8 {
    RepVt_825226C8 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_825226C8 {
    void *ptr;
    Rep_825226C8 *rep;
} WeakPtr_825226C8;

typedef struct Obj_825226C8 {
    void *vtbl;
    WeakPtr_825226C8 weak;   /* 0x4 */
} Obj_825226C8;

typedef struct SharedPtr_825226C8 {
    Obj_825226C8 *ptr;
    Rep_825226C8 *rep;
} SharedPtr_825226C8;

extern void fn_822315A0(Rep_825226C8 *);

static __forceinline void Decwref_825226C8(Rep_825226C8 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

void fn_825226C8(SharedPtr_825226C8 *sp, Obj_825226C8 *p, Rep_825226C8 *rep)
{
    if (sp->rep != 0)
        fn_822315A0(sp->rep);
    sp->rep = rep;
    sp->ptr = p;
    if (p != 0) {
        WeakPtr_825226C8 *w = &p->weak;
        if (rep != 0)
            _InterlockedIncrement(&rep->weaks);
        if (w->rep != 0)
            Decwref_825226C8(w->rep);
        w->rep = rep;
        w->ptr = p;
    }
}
