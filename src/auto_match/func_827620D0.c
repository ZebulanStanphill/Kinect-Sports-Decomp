typedef unsigned __int64 U64;

typedef struct Pair_827620D0 {
    int a;
    int b;
} Pair_827620D0;

typedef struct Vec3_827620D0 {
    int x;
    int y;
    int z;
} Vec3_827620D0;

typedef struct Sub_827620D0 {
    int pad[5];
    Vec3_827620D0 v;
} Sub_827620D0;

typedef struct Obj_827620D0 {
    void *vt;
    int ref;
    Sub_827620D0 sub;
    unsigned char flag;
    unsigned char pad29[0x7c - 0x29];
    Pair_827620D0 pair;
    int mode;
    int c88;
    int c8c;
    Vec3_827620D0 v;
} Obj_827620D0;

extern void fn_8275E130(Pair_827620D0 *pair, int *a, int *b);
extern void fn_8275FD58(U64 *out, Sub_827620D0 *s);
extern void fn_82760648(Sub_827620D0 *s);
extern unsigned int lbl_8201489C;

Obj_827620D0 *fn_827620D0(Obj_827620D0 *p)
{
    Sub_827620D0 *s;
    Pair_827620D0 *pp;
    U64 tmp;

    p->ref = 1;
    p->vt = &lbl_8201489C;
    s = &p->sub;
    fn_82760648(s);
    pp = &p->pair;
    pp->a = 0;
    pp->b = 0;
    if (p->flag == 1) {
        p->mode = 4;
    }
    else {
        p->mode = 0;
        p->v = s->v;
        fn_8275FD58(&tmp, s);
        *(U64 *)pp = tmp;
        fn_8275E130(pp, &p->c88, &p->c8c);
    }
    return p;
}
