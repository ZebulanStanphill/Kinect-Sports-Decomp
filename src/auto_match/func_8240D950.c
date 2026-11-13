long _InterlockedIncrement(long volatile *);
long _InterlockedDecrement(long volatile *);

typedef struct Rep_8240D950 Rep_8240D950;
typedef struct RepVt_8240D950 {
    void (*destroy)(Rep_8240D950 *);
    void (*deleteThis)(Rep_8240D950 *);
} RepVt_8240D950;
struct Rep_8240D950 {
    RepVt_8240D950 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_8240D950 {
    void *ptr;
    Rep_8240D950 *rep;
} WeakPtr_8240D950;

typedef struct Obj_8240D950 {
    int f0;
    void *owner;            /* 0x04 */
    void *source;           /* 0x08 */
    WeakPtr_8240D950 ref;   /* 0x0c */
} Obj_8240D950;

extern WeakPtr_8240D950 *fn_822BE6D0(WeakPtr_8240D950 *out, void *source);

static __forceinline void Decwref_8240D950(Rep_8240D950 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_8240D950(Rep_8240D950 **p)
{
    if (*p != 0)
        Decwref_8240D950(*p);
}

static __forceinline void Resetw_8240D950(WeakPtr_8240D950 *w, void *p, Rep_8240D950 *r)
{
    if (r != 0)
        _InterlockedIncrement(&r->weaks);
    Release_8240D950(&w->rep);
    w->rep = r;
    w->ptr = p;
}

void fn_8240D950(Obj_8240D950 *self, void *owner, void *source)
{
    WeakPtr_8240D950 tmp;
    WeakPtr_8240D950 *t;
    self->source = source;
    self->owner = owner;
    t = fn_822BE6D0(&tmp, source);
    Resetw_8240D950(&self->ref, t->ptr, t->rep);
    Release_8240D950(&tmp.rep);
}
