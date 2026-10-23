extern int fn_827740D8();

typedef struct Obj Obj;
typedef struct {
    char pad[0x88];
    void (*f88)(Obj *o, void *arg);
} ObjVt;
struct Obj {
    ObjVt *vt;
};

typedef struct {
    int a;
    Obj *obj;
    int pad[2];
    int data;
} Sub;

typedef struct {
    int a;
    Sub *sub;
} P;

void fn_82774178(P *p, Obj *o, int mode)
{
    fn_827740D8(p->sub);
    if (mode == 1 && p->sub->obj != 0 && p->sub->obj == o) {
        p->sub->obj->vt->f88(p->sub->obj, &p->sub->data);
        p->sub->obj = 0;
    }
}
