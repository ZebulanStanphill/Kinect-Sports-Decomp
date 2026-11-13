long _InterlockedIncrement(long volatile *);
long _InterlockedDecrement(long volatile *);

typedef struct Rep_8256E1D8 Rep_8256E1D8;
typedef struct RepVt_8256E1D8 {
    void (*destroy)(Rep_8256E1D8 *);
    void (*deleteThis)(Rep_8256E1D8 *);
} RepVt_8256E1D8;
struct Rep_8256E1D8 {
    RepVt_8256E1D8 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_8256E1D8 {
    void *ptr;
    Rep_8256E1D8 *rep;
} WeakPtr_8256E1D8;

static __forceinline void Decwref_8256E1D8(Rep_8256E1D8 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_8256E1D8(Rep_8256E1D8 **p)
{
    if (*p != 0)
        Decwref_8256E1D8(*p);
}

static __forceinline void Resetw_8256E1D8(WeakPtr_8256E1D8 *w, void *p, Rep_8256E1D8 *r)
{
    if (r != 0)
        _InterlockedIncrement(&r->weaks);
    Release_8256E1D8(&w->rep);
    w->rep = r;
    w->ptr = p;
}

void fn_8256E1D8(WeakPtr_8256E1D8 *self, void *p, Rep_8256E1D8 *r)
{
    Resetw_8256E1D8(self, p, r);
}
