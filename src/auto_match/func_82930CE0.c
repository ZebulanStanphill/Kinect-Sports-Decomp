extern char lbl_8202F104[];

typedef struct {
    void *vtbl;
    int type;
    int a;
    int b;
    int p2;
    int p3;
    int p4;
    int p5;
    int p6;
} Obj;

void fn_82930CE0(Obj *o, int p2, int p3, int p4, int p5, int p6)
{
    o->p2 = p2;
    o->p3 = p3;
    o->p4 = p4;
    o->type = 5;
    o->a = 0;
    o->vtbl = lbl_8202F104;
    o->b = 0;
    o->p5 = p5;
    o->p6 = p6;
}
