long _InterlockedDecrement(long volatile *);

typedef struct Rep_822E2E30 Rep_822E2E30;
typedef struct RepVt_822E2E30 {
    void (*destroy)(Rep_822E2E30 *);
    void (*deleteThis)(Rep_822E2E30 *);
} RepVt_822E2E30;
struct Rep_822E2E30 {
    RepVt_822E2E30 *vt;
    long uses;
    long weaks;
};

typedef struct Ptr_822E2E30 {
    void *ptr;
    Rep_822E2E30 *rep;     /* 0x4 */
} Ptr_822E2E30;

static __forceinline void Decwref_822E2E30(Rep_822E2E30 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_822E2E30(Rep_822E2E30 **p)
{
    if (*p != 0)
        Decwref_822E2E30(*p);
}

void fn_822E2E30(Ptr_822E2E30 *o)
{
    Release_822E2E30(&o->rep);
    o->rep = 0;
    o->ptr = 0;
}
