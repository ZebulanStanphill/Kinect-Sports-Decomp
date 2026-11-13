long _InterlockedDecrement(long volatile *);

typedef struct Rep_828E6D00 Rep_828E6D00;
typedef struct RepVt_828E6D00 {
    void (*destroy)(Rep_828E6D00 *);
    void (*deleteThis)(Rep_828E6D00 *);
    void (*release)(Rep_828E6D00 *);
} RepVt_828E6D00;
struct Rep_828E6D00 {
    RepVt_828E6D00 *vt;
    long uses;
    long refs;
};

typedef struct Ptr_828E6D00 {
    void *ptr;
    Rep_828E6D00 *rep;     /* 0x4 */
} Ptr_828E6D00;

static __forceinline void Decref_828E6D00(Rep_828E6D00 *r)
{
    if (_InterlockedDecrement(&r->refs) == 0)
        r->vt->release(r);
}

static __forceinline void Release_828E6D00(Rep_828E6D00 **p)
{
    if (*p != 0)
        Decref_828E6D00(*p);
}

void fn_828E6D00(Ptr_828E6D00 *first, Ptr_828E6D00 *last)
{
    for (; first != last; ++first) {
        Release_828E6D00(&first->rep);
    }
}
