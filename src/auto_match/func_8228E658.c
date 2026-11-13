long _InterlockedIncrement(long volatile *);
long _InterlockedDecrement(long volatile *);

typedef struct Rep_8228E658 Rep_8228E658;
typedef struct RepVt_8228E658 {
    void (*destroy)(Rep_8228E658 *);
    void (*deleteThis)(Rep_8228E658 *);
} RepVt_8228E658;
struct Rep_8228E658 {
    RepVt_8228E658 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_8228E658 {
    void *ptr;
    Rep_8228E658 *rep;
} WeakPtr_8228E658;

static __forceinline void Decwref_8228E658(Rep_8228E658 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_8228E658(Rep_8228E658 **p)
{
    if (*p != 0)
        Decwref_8228E658(*p);
}

static __forceinline void Resetw_8228E658(WeakPtr_8228E658 *w, void *p, Rep_8228E658 *r)
{
    if (r != 0)
        _InterlockedIncrement(&r->weaks);
    Release_8228E658(&w->rep);
    w->rep = r;
    w->ptr = p;
}

void fn_8228E658(WeakPtr_8228E658 *self, WeakPtr_8228E658 *o)
{
    Resetw_8228E658(self, o->ptr, o->rep);
}
