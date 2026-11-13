extern void *fn_8265C9E0(int n);
extern void fn_82F53A20(void *p, void *a);
extern void fn_824B2820(void *p);
extern char lbl_821C016C[];
extern char lbl_821C0198[];

typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
} Sub_824B2AE0;

typedef struct {
    char *vt;
    Sub_824B2AE0 sub;
    unsigned char f1c;
} Inner_824B2AE0;

typedef struct {
    char *vt;
    char pad[0x38];
    Inner_824B2AE0 *inner;
} Obj_824B2AE0;

static __forceinline void SubCtor(Sub_824B2AE0 *s)
{
    s->f0 = 0;
    s->f4 = 0;
    s->f8 = 0;
    s->fc = 0;
    s->f10 = 0;
    fn_824B2820(s);
}

static __forceinline Inner_824B2AE0 *Ctor(Inner_824B2AE0 *q)
{
    q->vt = lbl_821C0198;
    SubCtor(&q->sub);
    q->f1c = 0;
    return q;
}

Obj_824B2AE0 *fn_824B2AE0(void *arg)
{
    Obj_824B2AE0 *p;
    Inner_824B2AE0 *q;

    p = (Obj_824B2AE0 *)fn_8265C9E0(0x40);
    if (p != 0) {
        fn_82F53A20(p, arg);
        p->vt = lbl_821C016C;
        q = (Inner_824B2AE0 *)fn_8265C9E0(0x20);
        p->inner = q ? Ctor(q) : 0;
        return p;
    }
    return 0;
}
