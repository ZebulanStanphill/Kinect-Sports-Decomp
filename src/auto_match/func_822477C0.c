typedef struct ElemA ElemA;
typedef struct {
    void *pad[15];
    int (*get)(ElemA *e);
} ElemAVt;
struct ElemA {
    ElemAVt *vt;
    char pad[0x50];
};

typedef struct ElemB ElemB;
typedef struct {
    void *pad[15];
    unsigned char (*get)(ElemB *e);
} ElemBVt;
struct ElemB {
    ElemBVt *vt;
    char pad[0x50];
};

typedef struct {
    char pad[0x240];
    char sub[0x54];
    ElemA a[15];
    ElemB b[15];
} Data;

typedef struct Obj Obj;
typedef struct {
    void *pad;
    Data *(*data)(Obj *o);
} ObjVt;
struct Obj {
    ObjVt *vt;
};

extern int fn_82248C08(void *p);

int fn_822477C0(Obj *o, unsigned int i, unsigned int *out1, int *out2)
{
    int r = -1;
    if (i < 15) {
        ElemB *b = &o->vt->data(o)->b[i];
        int s = b->vt->get(b);
        Data *(*data)(Obj *) = o->vt->data;
        ElemA *a;
        *out1 = s == 1;
        *out2 = fn_82248C08(data(o)->sub);
        a = &o->vt->data(o)->a[i];
        r = a->vt->get(a);
    } else {
        *out1 = 0;
        *out2 = 1;
    }
    return r;
}
