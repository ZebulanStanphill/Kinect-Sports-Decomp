typedef struct Obj Obj;
typedef struct {
    void *slot0;
    unsigned char (*fn4)(Obj *self);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct {
    Obj *obj;
    void *arg;
} Pair;

extern void fn_8267EFD0(void *arg);

void fn_8267F608(Pair *p)
{
    if (p->obj->vtbl->fn4(p->obj)) {
        fn_8267EFD0(p->arg);
    }
}
