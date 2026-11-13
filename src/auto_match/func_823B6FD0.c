typedef struct Sub_823B6FD0 Sub_823B6FD0;
typedef struct SubVtbl_823B6FD0 {
    void *pad[15];
    unsigned int (*count)(Sub_823B6FD0 *self);
} SubVtbl_823B6FD0;
struct Sub_823B6FD0 { SubVtbl_823B6FD0 *vt; };

typedef struct Owner_823B6FD0 {
    char pad[0x1ec];
    Sub_823B6FD0 sub;
} Owner_823B6FD0;

typedef struct Item_823B6FD0 Item_823B6FD0;
typedef struct ItemVtbl_823B6FD0 {
    void *pad[2];
    Owner_823B6FD0 *(*owner)(Item_823B6FD0 *self);
} ItemVtbl_823B6FD0;
struct Item_823B6FD0 {
    ItemVtbl_823B6FD0 *vt;
    char pad[0x64];
    char base[4];
};

typedef struct Obj_823B6FD0 {
    char pad[0xc];
    char *item;
    char pad10[0x54 - 0x10];
    unsigned int index;
} Obj_823B6FD0;

extern unsigned char fn_8288B760(Item_823B6FD0 *item);
extern void fn_82891DD0(Item_823B6FD0 *item);

static __forceinline Item_823B6FD0 *GetItem(Obj_823B6FD0 *o)
{
    return o->item ? (Item_823B6FD0 *)(o->item - 0x68) : 0;
}
static __forceinline unsigned int Count(Item_823B6FD0 *item)
{
    Sub_823B6FD0 *s = &item->vt->owner(item)->sub;
    return s->vt->count(s);
}
void fn_823B6FD0(Obj_823B6FD0 *self)
{
    if ((int)self->item != 0 && !fn_8288B760(GetItem(self))) {
        Item_823B6FD0 *item = GetItem(self);
        unsigned int next = self->index + 1;
        if (Count(item) == next) {
            fn_82891DD0(GetItem(self));
        }
    }
}
