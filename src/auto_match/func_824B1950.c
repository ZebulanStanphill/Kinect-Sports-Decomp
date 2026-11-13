extern void *fn_8265C9E0(int n);
extern void fn_82F53A20(void *p, void *a);
extern void fn_824B1690(void *p);
extern char lbl_821C00D4[];
extern char lbl_821C00FC[];

typedef struct {
    char pad[0x48];
    float f48;
    float f4c;
} Arg_824B1950;

typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
} Sub_824B1950;

typedef struct {
    char *vt;
    Sub_824B1950 sub;
    unsigned char f1c;
    unsigned char f1d;
    int f20;
    float f24;
    float f28;
} Inner_824B1950;

typedef struct {
    char *vt;
    char pad[0x38];
    Inner_824B1950 *inner;
} Obj_824B1950;

static __forceinline void SubCtor(Sub_824B1950 *s)
{
    s->f0 = 0;
    s->f4 = 0;
    s->f8 = 0;
    s->fc = 0;
    s->f10 = 0;
    fn_824B1690(s);
}

static __forceinline Inner_824B1950 *Ctor(Inner_824B1950 *q, Arg_824B1950 *arg)
{
    q->vt = lbl_821C00FC;
    SubCtor(&q->sub);
    q->f1c = 0;
    q->f1d = 0;
    q->f20 = 0;
    q->f24 = arg->f48;
    q->f28 = arg->f4c;
    return q;
}

Obj_824B1950 *fn_824B1950(Arg_824B1950 *arg)
{
    Obj_824B1950 *p;
    Inner_824B1950 *q;

    p = (Obj_824B1950 *)fn_8265C9E0(0x40);
    if (p != 0) {
        fn_82F53A20(p, arg);
        p->vt = lbl_821C00D4;
        q = (Inner_824B1950 *)fn_8265C9E0(0x2c);
        p->inner = q ? Ctor(q, arg) : 0;
        return p;
    }
    return 0;
}
