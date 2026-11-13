long _InterlockedDecrement(long volatile *);

typedef struct Rep_8238B2F0 Rep_8238B2F0;
typedef struct RepVt_8238B2F0 {
    void (*destroy)(Rep_8238B2F0 *);
    void (*deleteThis)(Rep_8238B2F0 *);
} RepVt_8238B2F0;
struct Rep_8238B2F0 {
    RepVt_8238B2F0 *vt;
    long uses;
    long weaks;
};

typedef struct Obj_8238B2F0 {
    void *vt;
    int pad4[3];
    Rep_8238B2F0 *rep;     /* 0x10 */
} Obj_8238B2F0;

extern char lbl_821B45F0[], lbl_821AC5E0[];

static __forceinline void Decwref_8238B2F0(Rep_8238B2F0 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_8238B2F0(Rep_8238B2F0 **p)
{
    if (*p != 0)
        Decwref_8238B2F0(*p);
}

void fn_8238B2F0(Obj_8238B2F0 *o)
{
    o->vt = lbl_821B45F0;
    Release_8238B2F0(&o->rep);
    o->vt = lbl_821AC5E0;
}
