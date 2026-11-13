long _InterlockedDecrement(long volatile *);

typedef struct Rep_822E19D8 Rep_822E19D8;
typedef struct RepVt_822E19D8 {
    void (*destroy)(Rep_822E19D8 *);
    void (*deleteThis)(Rep_822E19D8 *);
} RepVt_822E19D8;
struct Rep_822E19D8 {
    RepVt_822E19D8 *vt;
    long uses;
    long weaks;
};

typedef struct Obj_822E19D8 {
    void *vt;
    int pad4[22];
    Rep_822E19D8 *rep;     /* 0x5c */
} Obj_822E19D8;

extern char lbl_821ADD98[];
extern void fn_822D02B8(Obj_822E19D8 *);

static __forceinline void Decwref_822E19D8(Rep_822E19D8 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_822E19D8(Rep_822E19D8 **p)
{
    if (*p != 0)
        Decwref_822E19D8(*p);
}

void fn_822E19D8(Obj_822E19D8 *o)
{
    o->vt = lbl_821ADD98;
    Release_822E19D8(&o->rep);
    fn_822D02B8(o);
}
