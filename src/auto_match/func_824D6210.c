long _InterlockedDecrement(long volatile *);

typedef struct Rep_824D6210 Rep_824D6210;
typedef struct RepVt_824D6210 {
    void (*destroy)(Rep_824D6210 *);
    void (*deleteThis)(Rep_824D6210 *);
} RepVt_824D6210;
struct Rep_824D6210 {
    RepVt_824D6210 *vt;
    long uses;
    long weaks;
};

typedef struct Ptr_824D6210 {
    void *px;
    Rep_824D6210 *rep;
} Ptr_824D6210;

typedef struct Obj_824D6210 {
    char pad[0x20];
    void *handle;          /* 0x20 */
} Obj_824D6210;

extern Ptr_824D6210 *fn_82F51468(Ptr_824D6210 *out, void *handle);
extern Ptr_824D6210 *fn_824D2AE8(Ptr_824D6210 *out, Ptr_824D6210 *src);
extern void fn_82F52CD8(void *p);
extern void fn_822315A0(Rep_824D6210 *rep);

static __forceinline void Decwref_824D6210(Rep_824D6210 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_824D6210(Rep_824D6210 **p)
{
    if (*p != 0)
        Decwref_824D6210(*p);
}

void fn_824D6210(Obj_824D6210 *o)
{
    Ptr_824D6210 sp;
    Ptr_824D6210 wp;
    void *h;

    h = o->handle;
    fn_824D2AE8(&sp, fn_82F51468(&wp, h));
    Release_824D6210(&wp.rep);
    fn_82F52CD8(sp.px);
    if (sp.rep != 0)
        fn_822315A0(sp.rep);
}
