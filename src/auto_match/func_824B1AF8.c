extern void *fn_8265C9E0(int size);
extern void fn_82F53A20(void *self, void *arg);
extern void fn_824B2020(void *self);
extern char lbl_821C0120[];
extern char lbl_821C014C[];

typedef struct Sub_824B1AF8 {
    int f0;  /* 0x00 */
    int f4;  /* 0x04 */
    int f8;  /* 0x08 */
    int fc;  /* 0x0c */
    int f10; /* 0x10 */
    int f14; /* 0x14 */
} Sub_824B1AF8;

typedef struct Inner_824B1AF8 {
    char *vt;         /* 0x00 */
    Sub_824B1AF8 sub; /* 0x04 */
    float value;      /* 0x1c */
    float velocity;   /* 0x20 */
    float step;       /* 0x24 */
    float maximum;    /* 0x28 */
    float limit;      /* 0x2c */
} Inner_824B1AF8;

typedef struct Obj_824B1AF8 {
    char *vt; /* 0x00 */
    char pad4[0x38];
    Inner_824B1AF8 *inner; /* 0x3c */
} Obj_824B1AF8;

static __forceinline void SubCtor(Sub_824B1AF8 *s)
{
    s->f0 = 0;
    s->f4 = 0;
    s->f8 = 0;
    s->fc = 0;
    s->f10 = 0;
    fn_824B2020(s);
}

static __forceinline Inner_824B1AF8 *Ctor(Inner_824B1AF8 *q)
{
    q->vt = lbl_821C014C;
    SubCtor(&q->sub);
    q->value = 0.0f;
    q->velocity = 0.0f;
    q->step = 0.1f;
    q->maximum = 5.0f;
    q->limit = 10.0f;
    return q;
}

Obj_824B1AF8 *fn_824B1AF8(Obj_824B1AF8 *p, void *arg)
{
    Inner_824B1AF8 *q;

    fn_82F53A20(p, arg);
    p->vt = lbl_821C0120;
    q = (Inner_824B1AF8 *)fn_8265C9E0(0x30);
    p->inner = q ? Ctor(q) : 0;
    return p;
}
