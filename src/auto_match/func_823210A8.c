long _InterlockedDecrement(long volatile *);

typedef struct Rep_823210A8 Rep_823210A8;
typedef struct RepVt_823210A8 {
    void (*destroy)(Rep_823210A8 *);
    void (*deleteThis)(Rep_823210A8 *);
} RepVt_823210A8;
struct Rep_823210A8 {
    RepVt_823210A8 *vt;
    long uses;
    long weaks;
};

typedef struct Ptr_823210A8 {
    void *ptr;
    Rep_823210A8 *rep;     /* 0x4 */
} Ptr_823210A8;

static __forceinline void Decwref_823210A8(Rep_823210A8 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_823210A8(Rep_823210A8 **p)
{
    if (*p != 0)
        Decwref_823210A8(*p);
}

void fn_823210A8(Ptr_823210A8 *first, Ptr_823210A8 *last)
{
    for (; first != last; ++first) {
        Release_823210A8(&first->rep);
    }
}
