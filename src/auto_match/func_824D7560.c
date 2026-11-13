long _InterlockedDecrement(long volatile *);

typedef struct Rep_824D7560 Rep_824D7560;
typedef struct RepVt_824D7560 {
    void (*destroy)(Rep_824D7560 *);
    void (*deleteThis)(Rep_824D7560 *);
} RepVt_824D7560;
struct Rep_824D7560 {
    RepVt_824D7560 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_824D7560 {
    void *px;
    Rep_824D7560 *rep;
} WeakPtr_824D7560;

typedef struct Ref_824D7560 {
    void *handle;
    void *owner;
} Ref_824D7560;

typedef struct Obj_824D7560 {
    char pad0[0x20];
    void *target;
} Obj_824D7560;

extern int fn_824CD030(Obj_824D7560 *o);
extern WeakPtr_824D7560 *fn_82F51468(WeakPtr_824D7560 *out, void *target);
extern void fn_824D2AE8(Ref_824D7560 *out, WeakPtr_824D7560 *w);
extern void fn_82F52CD8(void *handle);
extern void fn_822315A0(void *owner);

static __forceinline void Decwref_824D7560(Rep_824D7560 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_824D7560(Rep_824D7560 **p)
{
    if (*p != 0)
        Decwref_824D7560(*p);
}

static __forceinline void Ref_Dtor_824D7560(Ref_824D7560 *r)
{
    fn_82F52CD8(r->handle);
    if (r->owner != 0)
        fn_822315A0(r->owner);
}
void fn_824D7560(Obj_824D7560 *o)
{
    if (fn_824CD030(o) != 0) {
        Ref_824D7560 ref;
        WeakPtr_824D7560 w;
        fn_824D2AE8(&ref, fn_82F51468(&w, o->target));
        Release_824D7560(&w.rep);
        Ref_Dtor_824D7560(&ref);
    }
}
