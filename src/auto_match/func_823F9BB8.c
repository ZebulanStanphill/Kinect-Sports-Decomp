typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f0;
    void *f4;
    void *f8;
    void *fC;
    void (*f10)(Obj *self, int a, int b);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
};

typedef struct Owner {
    int pad0;
    int pad4;
    unsigned int off[4];
    Obj *obj0;
    int pad1c;
    Obj *obj1;
    int pad24;
    Obj *obj2;
    int pad2c;
    Obj *obj3;
} Owner;

void fn_823F9BB8(Owner *p, int a, int base)
{
    p->obj0->vt->f10(p->obj0, a, p->off[0] + base);
    p->obj1->vt->f10(p->obj1, a, p->off[1] + base);
    p->obj2->vt->f10(p->obj2, a, p->off[2] + base);
    p->obj3->vt->f10(p->obj3, a, p->off[3] + base);
}
