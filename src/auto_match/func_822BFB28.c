long _InterlockedIncrement(long volatile *);
long _InterlockedDecrement(long volatile *);

typedef struct Rep_822BFB28 Rep_822BFB28;
typedef struct RepVt_822BFB28 {
    void (*destroy)(Rep_822BFB28 *);
    void (*deleteThis)(Rep_822BFB28 *);
} RepVt_822BFB28;
struct Rep_822BFB28 {
    RepVt_822BFB28 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_822BFB28 {
    void *ptr;
    Rep_822BFB28 *rep;
} WeakPtr_822BFB28;

typedef struct Obj_822BFB28 {
    char pad[0x5a8];
    WeakPtr_822BFB28 weak;   /* 0x5a8 */
} Obj_822BFB28;

static __forceinline void Decwref_822BFB28(Rep_822BFB28 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_822BFB28(Rep_822BFB28 **p)
{
    if (*p != 0)
        Decwref_822BFB28(*p);
}

WeakPtr_822BFB28 *fn_822BFB28(WeakPtr_822BFB28 *out, Obj_822BFB28 *o)
{
    Rep_822BFB28 *r = o->weak.rep;
    void *p = o->weak.ptr;
    out->ptr = 0;
    out->rep = 0;
    if (r != 0)
        _InterlockedIncrement(&r->weaks);
    Release_822BFB28(&out->rep);
    out->rep = r;
    out->ptr = p;
    return out;
}
