long _InterlockedDecrement(long volatile *);

typedef struct Rep_824D7230 Rep_824D7230;
typedef struct RepVt_824D7230 {
    void (*destroy)(Rep_824D7230 *);
    void (*deleteThis)(Rep_824D7230 *);
} RepVt_824D7230;
struct Rep_824D7230 {
    RepVt_824D7230 *vt;
    long uses;
    long weaks;
};

typedef struct Ptr_824D7230 {
    void *px;
    Rep_824D7230 *rep;
} Ptr_824D7230;

typedef struct Obj_824D7230 {
    char pad0[0x20];
    int id;
} Obj_824D7230;

extern Ptr_824D7230 *fn_82F51468(Ptr_824D7230 *out, int id);
extern void fn_824D2AE8(Ptr_824D7230 *out, Ptr_824D7230 *src);
typedef struct Res_824D7230 { int sub; } Res_824D7230;
extern Res_824D7230 *fn_82F53380(void *p, unsigned int *a, int b, int c);
extern void fn_822315A0(Rep_824D7230 *rep);

static __forceinline void Decwref_824D7230(Rep_824D7230 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

void fn_824D7230(Obj_824D7230 *self, void **out, unsigned int *arg)
{
    Ptr_824D7230 sp;
    Ptr_824D7230 wp;
    Res_824D7230 *r;

    if (*arg != 0) {
        fn_824D2AE8(&sp, fn_82F51468(&wp, self->id));
        if (wp.rep != 0)
            Decwref_824D7230(wp.rep);
        r = fn_82F53380(sp.px, arg, 0, 1);
        { int *p = 0; if (r != 0) p = &r->sub; *out = p; }
        if (sp.rep != 0)
            fn_822315A0(sp.rep);
    } else {
        *out = 0;
    }
}
