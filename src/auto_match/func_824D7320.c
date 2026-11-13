long _InterlockedDecrement(long volatile *);

typedef struct Rep_824D7320 Rep_824D7320;
typedef struct RepVt_824D7320 {
    void (*destroy)(Rep_824D7320 *);
    void (*deleteThis)(Rep_824D7320 *);
} RepVt_824D7320;
struct Rep_824D7320 {
    RepVt_824D7320 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_824D7320 {
    void *px;
    Rep_824D7320 *rep;
} WeakPtr_824D7320;

typedef struct Ref_824D7320 {
    void *handle;
    void *owner;
} Ref_824D7320;

typedef struct Obj_824D7320 {
    char pad0[0x20];
    void *target;
} Obj_824D7320;

extern WeakPtr_824D7320 *fn_82F51468(WeakPtr_824D7320 *out, void *target);
extern void fn_824D2AE8(Ref_824D7320 *out, WeakPtr_824D7320 *w);
extern void fn_82F52C20(void *handle, void *sound, int flag);
extern void fn_822315A0(void *owner);

static __forceinline void Decwref_824D7320(Rep_824D7320 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_824D7320(Rep_824D7320 **p)
{
    if (*p != 0)
        Decwref_824D7320(*p);
}

void fn_824D7320(Obj_824D7320 *o, void **sound)
{
    if (*sound != 0) {
        Ref_824D7320 ref;
        WeakPtr_824D7320 w;
        fn_824D2AE8(&ref, fn_82F51468(&w, o->target));
        Release_824D7320(&w.rep);
        fn_82F52C20(ref.handle, *sound, 1);
        *sound = 0;
        if (ref.owner != 0)
            fn_822315A0(ref.owner);
    }
}
