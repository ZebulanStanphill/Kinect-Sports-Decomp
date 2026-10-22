typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *pad[4];
    void (*f10)(Obj *o, int a, int b);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
};

typedef struct Item {
    Obj *o;
    int x;
} Item;

typedef struct P {
    int pad[2];
    int offs[10];
    Item items[10];
} P;

void fn_823FA450(P *p, int a, int b)
{
    p->items[0].o->vt->f10(p->items[0].o, a, p->offs[0] + b);
    p->items[1].o->vt->f10(p->items[1].o, a, p->offs[1] + b);
    p->items[2].o->vt->f10(p->items[2].o, a, p->offs[2] + b);
    p->items[3].o->vt->f10(p->items[3].o, a, p->offs[3] + b);
    p->items[4].o->vt->f10(p->items[4].o, a, p->offs[4] + b);
    p->items[5].o->vt->f10(p->items[5].o, a, p->offs[5] + b);
    p->items[6].o->vt->f10(p->items[6].o, a, p->offs[6] + b);
    p->items[7].o->vt->f10(p->items[7].o, a, p->offs[7] + b);
    p->items[8].o->vt->f10(p->items[8].o, a, p->offs[8] + b);
    p->items[9].o->vt->f10(p->items[9].o, a, p->offs[9] + b);
}
