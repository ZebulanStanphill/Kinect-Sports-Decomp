extern void *fn_8265C9E0(int n);
extern void fn_82F53A20(void *p, void *a);
extern void fn_824A60F0(void *p);
extern char lbl_821BFFA4[];
extern char lbl_821BFFD0[];

typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
} Sub_824ADDB8;

typedef struct {
    char *vt;
    Sub_824ADDB8 sub;
    unsigned char f1c;
    unsigned char f1d;
    unsigned char f1e;
} Inner_824ADDB8;

typedef struct {
    char *vt;
    char pad[0x38];
    Inner_824ADDB8 *inner;
} Obj_824ADDB8;

static __forceinline void SubCtor(Sub_824ADDB8 *s)
{
    s->f0 = 0;
    s->f4 = 0;
    s->f8 = 0;
    s->fc = 0;
    s->f10 = 0;
    fn_824A60F0(s);
}

static __forceinline Inner_824ADDB8 *Ctor(Inner_824ADDB8 *q)
{
    q->vt = lbl_821BFFD0;
    SubCtor(&q->sub);
    q->f1c = 0;
    q->f1d = 1;
    q->f1e = 0;
    return q;
}

Obj_824ADDB8 *fn_824ADDB8(void *arg)
{
    Obj_824ADDB8 *p;
    Inner_824ADDB8 *q;

    p = (Obj_824ADDB8 *)fn_8265C9E0(0x40);
    if (p != 0) {
        fn_82F53A20(p, arg);
        p->vt = lbl_821BFFA4;
        q = (Inner_824ADDB8 *)fn_8265C9E0(0x20);
        p->inner = q ? Ctor(q) : 0;
        return p;
    }
    return 0;
}
