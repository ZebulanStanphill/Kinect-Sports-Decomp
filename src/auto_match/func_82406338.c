long _InterlockedDecrement(long volatile *);

typedef struct Rep_82406338 Rep_82406338;
typedef struct RepVt_82406338 {
    void (*destroy)(Rep_82406338 *);
    void (*deleteThis)(Rep_82406338 *);
} RepVt_82406338;
struct Rep_82406338 {
    RepVt_82406338 *vt;
    long uses;
    long refs;
};

typedef struct Obj_82406338 {
    void *vt;
    int f4;
    Rep_82406338 *rep;     /* 0x8 */
    int fc;
    char str[0x1c];        /* 0x10 */
} Obj_82406338;

extern char lbl_821B7DB4[];
extern void fn_82230300(void *s, int built, int newsize);

static __forceinline void Decref_82406338(Rep_82406338 *r)
{
    if (_InterlockedDecrement(&r->refs) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_82406338(Rep_82406338 **p)
{
    if (*p != 0)
        Decref_82406338(*p);
}

void fn_82406338(Obj_82406338 *o)
{
    o->vt = lbl_821B7DB4;
    fn_82230300(o->str, 1, 0);
    Release_82406338(&o->rep);
}
