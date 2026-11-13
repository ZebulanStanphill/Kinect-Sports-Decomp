long _InterlockedDecrement(long volatile *);

typedef struct Rep_828E6AA0 Rep_828E6AA0;
typedef struct RepVt_828E6AA0 {
    void (*destroy)(Rep_828E6AA0 *);
    void (*deleteThis)(Rep_828E6AA0 *);
    void (*release)(Rep_828E6AA0 *);
} RepVt_828E6AA0;
struct Rep_828E6AA0 {
    RepVt_828E6AA0 *vt;
    long uses;
    long refs;
};

typedef struct Obj_828E6AA0 {
    void *vt;
    Rep_828E6AA0 *rep;     /* 0x4 */
} Obj_828E6AA0;

extern void fn_828E6978(Obj_828E6AA0 *);

static __forceinline void Decref_828E6AA0(Rep_828E6AA0 *r)
{
    if (_InterlockedDecrement(&r->refs) == 0)
        r->vt->release(r);
}

static __forceinline void Release_828E6AA0(Rep_828E6AA0 **p)
{
    if (*p != 0)
        Decref_828E6AA0(*p);
}

void fn_828E6AA0(Obj_828E6AA0 *o)
{
    fn_828E6978(o);
    Release_828E6AA0(&o->rep);
}
