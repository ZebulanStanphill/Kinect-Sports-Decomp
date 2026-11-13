long _InterlockedDecrement(long volatile *);

typedef struct Rep_822315A0 Rep_822315A0;
typedef struct RepVt_822315A0 {
    void (*destroy)(Rep_822315A0 *);
    void (*deleteThis)(Rep_822315A0 *);
} RepVt_822315A0;
struct Rep_822315A0 {
    RepVt_822315A0 *vt;
    long uses;
    long weaks;
};

static __forceinline void Decwref_822315A0(Rep_822315A0 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

void fn_822315A0(Rep_822315A0 *r)
{
    if (_InterlockedDecrement(&r->uses) == 0) {
        r->vt->destroy(r);
        Decwref_822315A0(r);
    }
}
