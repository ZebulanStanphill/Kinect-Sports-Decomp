typedef struct Obj Obj;
typedef struct Vtbl {
    void *f[18];
    unsigned char (*IsActive)(Obj *o);
} Vtbl;
typedef struct Sub { int a; int id; } Sub;
struct Obj {
    Vtbl *vt;
    int a, b;
    Sub *sub;
};

extern void fn_82711878(Obj *o);

void fn_827118D0(Obj *o, int a, int b, unsigned int id)
{
    if (o->vt->IsActive(o) && o->sub->id != 0 && id == o->sub->id) {
        fn_82711878(o);
    }
}
