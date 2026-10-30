typedef struct Item Item;
typedef struct ItemVt {
    void (*f0)(Item *self);
} ItemVt;
struct Item {
    ItemVt *vt;
};

typedef struct Obj {
    int pad[2];
    Item *items[2];
} Obj;

void fn_82BB5420(Obj *o)
{
    int i;
    for (i = 0; i < 2; i++) {
        o->items[i]->vt->f0(o->items[i]);
    }
}
