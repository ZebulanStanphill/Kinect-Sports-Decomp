long _InterlockedDecrement(long volatile *);

typedef struct Rep_828E8D48 Rep_828E8D48;
typedef struct RepVt_828E8D48 {
    void (*destroy)(Rep_828E8D48 *);
    void (*deleteThis)(Rep_828E8D48 *);
    void (*release)(Rep_828E8D48 *);
} RepVt_828E8D48;
struct Rep_828E8D48 {
    RepVt_828E8D48 *vt;
    long uses;
    long refs;
};

typedef struct Obj_828E8D48 {
    void *vt;
    int f4;
    int f8;
    Rep_828E8D48 *rep;     /* 0xc */
    char member[0x58];     /* 0x10 */
    unsigned char active;  /* 0x68 */
} Obj_828E8D48;

extern char lbl_82027494[];
extern char lbl_82027424[];
extern void fn_828E8AC0(void *member);

static __forceinline void Decref_828E8D48(Rep_828E8D48 *r)
{
    if (_InterlockedDecrement(&r->refs) == 0)
        r->vt->release(r);
}

static __forceinline void Release_828E8D48(Rep_828E8D48 **p)
{
    if (*p != 0)
        Decref_828E8D48(*p);
}

static __forceinline void Stop_828E8D48(unsigned char *a)
{
    if (*a) {
        *a = 0;
    }
}

void fn_828E8D48(Obj_828E8D48 *o)
{
    o->vt = lbl_82027494;
    Stop_828E8D48(&o->active);
    fn_828E8AC0(o->member);
    o->vt = lbl_82027424;
    Release_828E8D48(&o->rep);
}
