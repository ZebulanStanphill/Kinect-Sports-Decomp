typedef struct Obj_82DFF010 Obj_82DFF010;

typedef struct VTable_82DFF010 {
    void *slots[10];
    void (*f28)(Obj_82DFF010 *self);
} VTable_82DFF010;

struct Obj_82DFF010 {
    VTable_82DFF010 *vt;
};

typedef struct Owner_82DFF010 {
    int pad0;
    int pad4;
    Obj_82DFF010 **items;
    int count;
} Owner_82DFF010;

void fn_82DFF010(Owner_82DFF010 *p)
{
    int n = p->count;
    int i;

    for (i = 0; i < n; i++) {
        Obj_82DFF010 *o = p->items[i];
        o->vt->f28(o);
    }
}
