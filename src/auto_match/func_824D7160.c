long _InterlockedDecrement(long volatile *);

typedef struct Rep_824D7160 Rep_824D7160;
typedef struct RepVt_824D7160 {
    void (*destroy)(Rep_824D7160 *);
    void (*deleteThis)(Rep_824D7160 *);
} RepVt_824D7160;
struct Rep_824D7160 {
    RepVt_824D7160 *vt;
    long uses;
    long weaks;
};

typedef struct Ptr_824D7160 {
    void *px;
    Rep_824D7160 *rep;
} Ptr_824D7160;

typedef struct Obj_824D7160 {
    char pad0[0x20];
    int id;
} Obj_824D7160;

extern Ptr_824D7160 *fn_82F51468(Ptr_824D7160 *out, int id);
extern void fn_824D2AE8(Ptr_824D7160 *out, Ptr_824D7160 *src);
typedef struct Res_824D7160 { int sub; } Res_824D7160;
extern Res_824D7160 *fn_82F53380(void *p, int a, int b, int c);
extern void fn_822315A0(Rep_824D7160 *rep);

static __forceinline void Decwref_824D7160(Rep_824D7160 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

void fn_824D7160(Obj_824D7160 *self, void **out, int arg)
{
    Ptr_824D7160 sp;
    Ptr_824D7160 wp;
    Res_824D7160 *r;
    int id = self->id;

    fn_824D2AE8(&sp, fn_82F51468(&wp, id));
    if (wp.rep != 0)
        Decwref_824D7160(wp.rep);
    r = fn_82F53380(sp.px, arg, 0, 1);
    { int *p = 0; if (r != 0) p = &r->sub; *out = p; }
    if (sp.rep != 0)
        fn_822315A0(sp.rep);
}
