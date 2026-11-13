long _InterlockedDecrement(long volatile *);

typedef struct Rep_8313B910 Rep_8313B910;
typedef struct RepVt_8313B910 {
    void (*destroy)(Rep_8313B910 *);
    void (*deleteThis)(Rep_8313B910 *);
} RepVt_8313B910;
struct Rep_8313B910 {
    RepVt_8313B910 *vt;
    long uses;
    long weaks;
};

typedef struct Ptr_8313B910 {
    void *ptr;
    Rep_8313B910 *rep;     /* 0x4 */
} Ptr_8313B910;

extern Ptr_8313B910 lbl_832845F8;

static __forceinline void Decwref_8313B910(Rep_8313B910 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

/* destructor of a global weak_ptr: if (_Rep) _Rep->_Decwref(); */
void fn_8313B910(void)
{
    if (lbl_832845F8.rep != 0)
        Decwref_8313B910(lbl_832845F8.rep);
}
