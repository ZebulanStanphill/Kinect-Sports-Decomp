extern void *fn_8265C9E0(int n);
extern void fn_82F53A20(void *p, void *a);
extern void fn_824AE4D8(void *p);
extern char lbl_821BFFF4[];
extern char lbl_821C0020[];

typedef struct {
    char pad[0x48];
    float f48;
    float f4c;
    float f50;
} Arg_824ADF58;

typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
} Sub_824ADF58;

typedef struct {
    char *vt;
    Sub_824ADF58 sub;
    unsigned char f1c;
    unsigned char f1d;
    unsigned char f1e;
    float f20;
    float f24;
    float f28;
    float f2c;
} Inner_824ADF58;

typedef struct {
    char *vt;
    char pad[0x38];
    Inner_824ADF58 *inner;
} Obj_824ADF58;

static __forceinline void SubCtor(Sub_824ADF58 *s)
{
    s->f0 = 0;
    s->f4 = 0;
    s->f8 = 0;
    s->fc = 0;
    s->f10 = 0;
    fn_824AE4D8(s);
}

static __forceinline Inner_824ADF58 *Ctor(Inner_824ADF58 *q, Arg_824ADF58 *arg)
{
    q->vt = lbl_821C0020;
    SubCtor(&q->sub);
    q->f1c = 0;
    q->f1d = 1;
    q->f1e = 0;
    q->f20 = 0.0f;
    q->f24 = arg->f48;
    q->f28 = arg->f4c;
    q->f2c = arg->f50;
    return q;
}

Obj_824ADF58 *fn_824ADF58(Obj_824ADF58 *p, Arg_824ADF58 *arg)
{
    Inner_824ADF58 *q;

    fn_82F53A20(p, arg);
    p->vt = lbl_821BFFF4;
    q = (Inner_824ADF58 *)fn_8265C9E0(0x30);
    p->inner = q ? Ctor(q, arg) : 0;
    return p;
}
