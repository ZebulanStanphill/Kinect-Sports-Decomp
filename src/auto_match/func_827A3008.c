extern void fn_8267C498(void *p);
extern void fn_827A2E70(void *p);

typedef struct Obj {
    int x0;
    int refs;
} Obj;

typedef struct S {
    int x0;
    int x4;
    int x8;
    int xc;
    int x10;
    Obj *obj;
} S;

static void reset(Obj **pp)
{
    if (*pp != 0) {
        fn_8267C498(*pp);
    }
    *pp = 0;
}

void fn_827A3008(S *p)
{
    int v;
    Obj *t;

    v = (int)p->obj;
    if (v != 0) {
        ((Obj *)v)->refs++;
        t = p->obj;
        reset(&p->obj);
        fn_827A2E70(t);
        if (t != 0) {
            fn_8267C498(t);
        }
    }
}
