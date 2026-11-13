extern char lbl_82006E64[];
extern char lbl_8200F0B0[];
extern char lbl_82010284[];
extern char lbl_82013318[];
typedef struct Pair_826C29B8 {
    void *a;
    void *b;
    unsigned char flags;
} Pair_826C29B8;
typedef struct Sub_826C29B8 {
    void *vt;
    Pair_826C29B8 p1;
    Pair_826C29B8 p2;
    int f1c;
} Sub_826C29B8;
typedef struct Obj_826C29B8 {
    void *vt;
    int pad4[3];
    void *vt10;
    int pad14[7];
    Sub_826C29B8 sub;
} Obj_826C29B8;
extern void fn_826C0A68(Obj_826C29B8 *self);
static __forceinline void Pair_Ctor(Pair_826C29B8 *p)
{
    p->flags = 0;
    p->a = 0;
    p->b = 0;
}

static __forceinline void Sub_Ctor(Sub_826C29B8 *s)
{
    s->vt = lbl_82006E64;
    Pair_Ctor(&s->p1);
    Pair_Ctor(&s->p2);
    s->f1c = 0;
}

Obj_826C29B8 *fn_826C29B8(Obj_826C29B8 *self)
{
    fn_826C0A68(self);
    Sub_Ctor(&self->sub);
    self->vt = lbl_82010284;
    self->vt10 = lbl_82013318;
    self->sub.vt = lbl_8200F0B0;
    return self;
}
