long _InterlockedDecrement(long volatile *);

typedef struct Rep_824987D8 Rep_824987D8;
typedef struct RepVt_824987D8 {
    void (*destroy)(Rep_824987D8 *);
    void (*deleteThis)(Rep_824987D8 *);
} RepVt_824987D8;
struct Rep_824987D8 {
    RepVt_824987D8 *vt;
    long uses;
    long weaks;
};

typedef struct Obj_824987D8 {
    void *vt;
    int pad4[23];
    Rep_824987D8 *rep;     /* 0x60 */
} Obj_824987D8;

extern char lbl_821BEF88[];
extern void fn_82558B08(void);
extern void fn_82498C38(Obj_824987D8 *);

static __forceinline void Decwref_824987D8(Rep_824987D8 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_824987D8(Rep_824987D8 **p)
{
    if (*p != 0)
        Decwref_824987D8(*p);
}

void fn_824987D8(Obj_824987D8 *o)
{
    o->vt = lbl_821BEF88;
    fn_82558B08();
    Release_824987D8(&o->rep);
    fn_82498C38(o);
}
