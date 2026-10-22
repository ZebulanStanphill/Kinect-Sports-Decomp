extern void fn_822FF888(void *p);
extern void fn_82359C18(void *p);
extern void fn_8265CA20(void *p);
extern void fn_8289D4C0(void *p);
extern char lbl_82196B30[];
extern char lbl_82197100[];
extern char lbl_821AEC2C[];

typedef struct Sub {
    void *vtbl;
    char pad[0x50];
} Sub;

typedef struct Vec {
    int *begin;
    int *last;
    int *end;
} Vec;

typedef struct Obj {
    void *vtbl;
    char pad4[0x14];
    char f18[0x18];
    Sub f30;
    Sub f84;
    Sub fd8;
    Vec v;
} Obj;

static void Vec_tidy(Vec *v)
{
    if (v->begin != 0) {
        fn_8265CA20(v->begin);
    }
    v->begin = 0;
    v->last = 0;
    v->end = 0;
}

static void Sub_dtor(Sub *s, void *vt)
{
    s->vtbl = vt;
    fn_8289D4C0(s);
}

void fn_82381E58(Obj *p)
{
    Vec_tidy(&p->v);
    Sub_dtor(&p->fd8, lbl_82197100);
    Sub_dtor(&p->f84, lbl_82196B30);
    Sub_dtor(&p->f30, lbl_82197100);
    p->vtbl = lbl_821AEC2C;
    fn_82359C18(p->f18);
    fn_822FF888(p);
}
