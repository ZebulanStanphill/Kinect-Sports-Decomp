long _InterlockedIncrement(long volatile *);
long _InterlockedDecrement(long volatile *);

typedef struct Rep_824060E8 Rep_824060E8;
typedef struct RepVt_824060E8 {
    void (*destroy)(Rep_824060E8 *);
    void (*deleteThis)(Rep_824060E8 *);
} RepVt_824060E8;
struct Rep_824060E8 {
    RepVt_824060E8 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_824060E8 {
    void *ptr;
    Rep_824060E8 *rep;
} WeakPtr_824060E8;

static __forceinline void Decwref_824060E8(Rep_824060E8 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_824060E8(Rep_824060E8 **p)
{
    if (*p != 0)
        Decwref_824060E8(*p);
}

static __forceinline void Resetw_824060E8(WeakPtr_824060E8 *w, void *p, Rep_824060E8 *r)
{
    if (r != 0)
        _InterlockedIncrement(&r->weaks);
    Release_824060E8(&w->rep);
    w->rep = r;
    w->ptr = p;
}

WeakPtr_824060E8 *fn_824060E8(WeakPtr_824060E8 *out, WeakPtr_824060E8 *o)
{
    out->ptr = 0;
    out->rep = 0;
    Resetw_824060E8(out, o->ptr, o->rep);
    return out;
}
