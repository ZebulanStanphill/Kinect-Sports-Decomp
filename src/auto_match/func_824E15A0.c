long _InterlockedDecrement(long volatile *);

typedef struct Rep_824E15A0 Rep_824E15A0;
typedef struct RepVt_824E15A0 {
    void (*destroy)(Rep_824E15A0 *);
    void (*deleteThis)(Rep_824E15A0 *);
} RepVt_824E15A0;
struct Rep_824E15A0 {
    RepVt_824E15A0 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_824E15A0 {
    void *px;
    Rep_824E15A0 *rep;
} WeakPtr_824E15A0;

typedef struct Ref_824E15A0 {
    void *handle;
    void *owner;
} Ref_824E15A0;

typedef struct Cfg_824E15A0 {
    char pad0[0x64];
    int value;
} Cfg_824E15A0;

typedef struct Obj_824E15A0 {
    char pad0[0x20];
    void *target;
    char pad24[0xfc - 0x24];
    Cfg_824E15A0 *cfg;
} Obj_824E15A0;

extern int fn_824CD030(Obj_824E15A0 *o);
extern WeakPtr_824E15A0 *fn_82F51468(WeakPtr_824E15A0 *out, void *target);
extern void fn_824D2AE8(Ref_824E15A0 *out, WeakPtr_824E15A0 *w);
extern void fn_82F52CD8(void *handle);
extern void fn_822315A0(void *owner);
extern void fn_824E1A20(Obj_824E15A0 *o, int value);

static __forceinline void Decwref_824E15A0(Rep_824E15A0 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_824E15A0(Rep_824E15A0 **p)
{
    if (*p != 0)
        Decwref_824E15A0(*p);
}

void fn_824E15A0(Obj_824E15A0 *o)
{
    if (fn_824CD030(o) != 0) {
        Ref_824E15A0 ref;
        WeakPtr_824E15A0 w;
        fn_824D2AE8(&ref, fn_82F51468(&w, o->target));
        Release_824E15A0(&w.rep);
        fn_82F52CD8(ref.handle);
        fn_824E1A20(o, o->cfg->value);
        if (ref.owner != 0)
            fn_822315A0(ref.owner);
    }
}
