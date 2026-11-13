long _InterlockedDecrement(long volatile *);

typedef struct Rep_827D9C88 Rep_827D9C88;
typedef struct RepVt_827D9C88 {
    void (*destroy)(Rep_827D9C88 *);
    void (*deleteThis)(Rep_827D9C88 *);
} RepVt_827D9C88;
struct Rep_827D9C88 {
    RepVt_827D9C88 *vt;
    long uses;
    long weaks;
};

typedef struct Ptr_827D9C88 {
    void *ptr;
    Rep_827D9C88 *rep;     /* 0x4 */
} Ptr_827D9C88;

static __forceinline void Decwref_827D9C88(Rep_827D9C88 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

/* weak_ptr release: if (_Rep) _Rep->_Decwref(); */
void fn_827D9C88(Ptr_827D9C88 *o)
{
    if (o->rep != 0)
        Decwref_827D9C88(o->rep);
}
