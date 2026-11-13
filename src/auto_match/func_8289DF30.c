long _InterlockedDecrement(long volatile *);

typedef struct Rep_8289DF30 Rep_8289DF30;
typedef struct RepVt_8289DF30 {
    void (*dtor)(Rep_8289DF30 *);
    void (*destroy)(Rep_8289DF30 *);
    void (*deleteThis)(Rep_8289DF30 *);
} RepVt_8289DF30;
struct Rep_8289DF30 {
    RepVt_8289DF30 *vt;
    long uses;
    long weaks;
};

static __forceinline void Decwref_8289DF30(Rep_8289DF30 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

void fn_8289DF30(Rep_8289DF30 *r)
{
    if (_InterlockedDecrement(&r->uses) == 0) {
        r->vt->destroy(r);
        Decwref_8289DF30(r);
    }
}
