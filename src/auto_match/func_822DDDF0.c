long _InterlockedDecrement(long volatile *);

typedef struct Rep_822DDDF0 Rep_822DDDF0;
typedef struct RepVt_822DDDF0 {
    void (*destroy)(Rep_822DDDF0 *);
    void (*deleteThis)(Rep_822DDDF0 *);
} RepVt_822DDDF0;
struct Rep_822DDDF0 {
    RepVt_822DDDF0 *vt;
    long uses;
    long weaks;
};

typedef struct WeakPtr_822DDDF0 {
    void *ptr;
    Rep_822DDDF0 *rep;
} WeakPtr_822DDDF0;

typedef struct Sub_822DDDF0 {
    char pad0[0x14];
    WeakPtr_822DDDF0 wp;        /* 0x14 */
    char pad1c[0xc];
    char tree[0x10];            /* 0x28 */
} Sub_822DDDF0;

typedef struct Obj_822DDDF0 {
    void *vt;
    char pad4[0x2c];
    Sub_822DDDF0 sub;           /* 0x30 */
    char pad68[0x4c];
    WeakPtr_822DDDF0 wp;        /* 0xb4 */
} Obj_822DDDF0;

extern char lbl_821ADB98[];
extern void fn_82230300(void *tree, int a, int b);
extern void fn_822D02B8(Obj_822DDDF0 *o);

static __forceinline void Decwref_822DDDF0(Rep_822DDDF0 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void WeakRelease_822DDDF0(WeakPtr_822DDDF0 *w)
{
    if (w->rep != 0)
        Decwref_822DDDF0(w->rep);
}

static __forceinline void Sub_Dtor_822DDDF0(Sub_822DDDF0 *s)
{
    fn_82230300(s->tree, 1, 0);
    WeakRelease_822DDDF0(&s->wp);
}

void fn_822DDDF0(Obj_822DDDF0 *o)
{
    o->vt = lbl_821ADB98;
    WeakRelease_822DDDF0(&o->wp);
    Sub_Dtor_822DDDF0(&o->sub);
    fn_822D02B8(o);
}
