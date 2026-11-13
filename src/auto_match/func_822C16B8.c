long _InterlockedDecrement(long volatile *);

typedef struct Rep_822C16B8 Rep_822C16B8;
typedef struct RepVt_822C16B8 {
    void (*destroy)(Rep_822C16B8 *);
    void (*deleteThis)(Rep_822C16B8 *);
} RepVt_822C16B8;
struct Rep_822C16B8 {
    RepVt_822C16B8 *vt;
    long uses;
    long weaks;
};

typedef struct Obj_822C16B8 {
    void *vt;
    Rep_822C16B8 *rep;     /* 0x4 */
    char sub[4];           /* 0x8 */
} Obj_822C16B8;

extern void fn_822C1A38(Obj_822C16B8 *);
extern void fn_822DBD60(void *);

static __forceinline void Decwref_822C16B8(Rep_822C16B8 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_822C16B8(Rep_822C16B8 **p)
{
    if (*p != 0)
        Decwref_822C16B8(*p);
}

void fn_822C16B8(Obj_822C16B8 *o)
{
    fn_822C1A38(o);
    fn_822DBD60(o->sub);
    Release_822C16B8(&o->rep);
}
