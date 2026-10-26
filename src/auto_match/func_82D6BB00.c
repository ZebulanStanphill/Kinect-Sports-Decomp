typedef struct Obj Obj;
typedef struct ObjVt {
    void *pad[9];
    void (*f)(Obj *self, int arg);
} ObjVt;
struct Obj { ObjVt *vt; };
typedef struct Item { int key; Obj *obj; } Item;
typedef struct Owner {
    char pad[0xc];
    Item *items;
    int count;
} Owner;

void fn_82D6BB00(Owner *p, int arg)
{
    int i;
    for (i = 0; i < p->count; i++) {
        Obj *o = p->items[i].obj;
        o->vt->f(o, arg);
    }
}
