long _InterlockedDecrement(long volatile *);

typedef struct Rep_822CA0F8 Rep_822CA0F8;
typedef struct RepVt_822CA0F8 {
    void (*destroy)(Rep_822CA0F8 *);
    void (*deleteThis)(Rep_822CA0F8 *);
} RepVt_822CA0F8;
struct Rep_822CA0F8 {
    RepVt_822CA0F8 *vt;
    long uses;
    long weaks;
};

typedef struct Obj_822CA0F8 {
    void *px;
    Rep_822CA0F8 *rep;     /* 0x4 */
    void *first;           /* 0x8 */
    void *last;            /* 0xc */
    void *end;             /* 0x10 */
} Obj_822CA0F8;

extern void fn_8265CA20(void *p);

static __forceinline void Decwref_822CA0F8(Rep_822CA0F8 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_822CA0F8(Rep_822CA0F8 **p)
{
    if (*p != 0)
        Decwref_822CA0F8(*p);
}

Obj_822CA0F8 *fn_822CA0F8(Obj_822CA0F8 *o)
{
    if (o->first != 0)
        fn_8265CA20(o->first);
    o->first = 0;
    o->last = 0;
    o->end = 0;
    Release_822CA0F8(&o->rep);
    fn_8265CA20(o);
    return o;
}
