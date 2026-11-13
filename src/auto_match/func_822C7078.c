long _InterlockedDecrement(long volatile *);

typedef struct Rep_822C7078 Rep_822C7078;
typedef struct RepVt_822C7078 {
    void (*destroy)(Rep_822C7078 *);
    void (*deleteThis)(Rep_822C7078 *);
} RepVt_822C7078;
struct Rep_822C7078 {
    RepVt_822C7078 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_822C7078 {
    void *px;
    Rep_822C7078 *rep;
} WeakPtr_822C7078;

typedef struct Obj_822C7078 {
    WeakPtr_822C7078 owner;
    int a;      /* 0x8 */
    int b;      /* 0xc */
} Obj_822C7078;

extern WeakPtr_822C7078 *fn_824060E8(WeakPtr_822C7078 *dst, WeakPtr_822C7078 *src);

static __forceinline void Decwref_822C7078(Rep_822C7078 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_822C7078(WeakPtr_822C7078 *p)
{
    if (p->rep != 0)
        Decwref_822C7078(p->rep);
}

Obj_822C7078 *fn_822C7078(Obj_822C7078 *o, WeakPtr_822C7078 *owner, int a, int b)
{
    fn_824060E8(&o->owner, owner);
    o->a = a;
    o->b = b;
    Release_822C7078(owner);
    return o;
}
