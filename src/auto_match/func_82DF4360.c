typedef struct Item_82DF4360 {
    struct ItemVt_82DF4360 *vt;
    int pad4[2];
    unsigned char flags;
    char padD[7];
    float time;
} Item_82DF4360;

typedef struct ItemVt_82DF4360 {
    void *slot[3];
    void (*fire)(Item_82DF4360 *self);
} ItemVt_82DF4360;

typedef struct Owner_82DF4360 {
    char pad0[0x2c];
    Item_82DF4360 **items;
    int count;
} Owner_82DF4360;

static __forceinline void Fire(Item_82DF4360 *item)
{
    unsigned char *flags = &item->flags;
    item->vt->fire(item);
    *flags |= 1;
}

void fn_82DF4360(Owner_82DF4360 *owner, float t)
{
    Owner_82DF4360 *self = owner;
    int i;
    int n = self->count;

    for (i = 0; i < n; i++) {
        Item_82DF4360 *item = self->items[i];
        if (item->time > t && (item->flags & 1) == 0) {
            Fire(item);
        }
    }
}
