typedef struct Obj Obj;
typedef struct {
    int (*fn0)(Obj *self);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct {
    int pad;
    Obj *a;
    Obj *b;
    int cached;
} Pair;

int fn_82F72580(Pair *p)
{
    if (p->cached < 0) {
        Obj *a = p->a;
        p->cached = p->b->vtbl->fn0(p->b) + a->vtbl->fn0(a);
    }
    return p->cached;
}
