extern char lbl_8202F1C4[];

typedef struct {
    void *vtbl;
    int type;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
} Obj;

void fn_82933A98(Obj *o)
{
    o->type = 0x12;
    o->a = 0;
    o->vtbl = lbl_8202F1C4;
    o->b = 0;
    o->c = 0;
    o->d = 0;
    o->f = 2;
    o->e = 0;
}
