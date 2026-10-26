typedef struct Obj Obj;
typedef struct {
    void *slot0;
    unsigned char (*fn4)(Obj *self);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct {
    int pad;
    unsigned int count;
    void *arg;
    Obj **items;
} Group;

extern void fn_8267EFD0(void *arg);

void fn_8267F7C0(Group *g)
{
    unsigned int i;

    for (i = 0; i < g->count; i++) {
        if (!g->items[i]->vtbl->fn4(g->items[i])) {
            return;
        }
    }
    fn_8267EFD0(g->arg);
}
