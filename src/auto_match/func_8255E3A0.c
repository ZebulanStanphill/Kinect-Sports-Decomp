typedef struct Item_8255E3A0 Item_8255E3A0;

typedef struct ItemVtbl_8255E3A0 {
    void *slots[5];
    int (*getId)(Item_8255E3A0 *self);
} ItemVtbl_8255E3A0;

struct Item_8255E3A0 {
    ItemVtbl_8255E3A0 *vt;
};

typedef struct Owner_8255E3A0 {
    char pad0[0x1b4];
    Item_8255E3A0 *item;
} Owner_8255E3A0;

typedef struct Obj_8255E3A0 {
    char pad0[0x8c0];
    Owner_8255E3A0 *owner;
} Obj_8255E3A0;

extern void fn_8255E320(Obj_8255E3A0 *o, int id, int arg);

static __forceinline int getId(Obj_8255E3A0 *o)
{
    Item_8255E3A0 *item;
    if (o->owner != 0 && (item = o->owner->item) != 0)
        return item->vt->getId(item);
    return -1;
}

int fn_8255E3A0(Obj_8255E3A0 *o, int unused, int arg)
{
    int id = getId(o);
    if (id == -1)
        return 0;
    fn_8255E320(o, id, arg);
    return 1;
}
