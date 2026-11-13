typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Sp_823A9880 {
    void *px;
    void *rep;
} Sp_823A9880;

typedef struct Obj_823A9880 {
    int f0;
    int f4;
    int f8;
    __vector4 v10;
    int f20;
    float f24[6];
    int f3c;
    int f40;
    Sp_823A9880 sp;
} Obj_823A9880;

extern Sp_823A9880 *fn_82365BD8(Sp_823A9880 *d, Sp_823A9880 *s);
extern void fn_822315A0(void *rep);

static __forceinline void SwapPtr(void **a, void **b)
{
    void *t = *a;
    *a = *b;
    *b = t;
}

/* the count swap comes first, as in the original's operator= */
static __forceinline void Sp_Swap(Sp_823A9880 *a, Sp_823A9880 *b)
{
    SwapPtr(&a->rep, &b->rep);
    SwapPtr(&a->px, &b->px);
}

static __forceinline Sp_823A9880 *Sp_Assign(Sp_823A9880 *self, Sp_823A9880 *r)
{
    Sp_823A9880 tmp;
    Sp_Swap(fn_82365BD8(&tmp, r), self);
    if (tmp.rep != 0) fn_822315A0(tmp.rep);
    return self;
}

Obj_823A9880 *fn_823A9880(Obj_823A9880 *d, Obj_823A9880 *s)
{
    d->f0 = s->f0;
    d->f4 = s->f4;
    d->f8 = s->f8;
    d->v10 = s->v10;
    d->f20 = s->f20;
    d->f24[0] = s->f24[0];
    d->f24[1] = s->f24[1];
    d->f24[2] = s->f24[2];
    d->f24[3] = s->f24[3];
    d->f24[4] = s->f24[4];
    d->f24[5] = s->f24[5];
    d->f3c = s->f3c;
    d->f40 = s->f40;
    Sp_Assign(&d->sp, &s->sp);
    return d;
}
