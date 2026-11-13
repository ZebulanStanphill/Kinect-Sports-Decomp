typedef struct Item_82DF43E8 {
    struct ItemVt_82DF43E8 *vt;
    int pad4[2];
    unsigned char flags;
    char padD[7];
    float time;
} Item_82DF43E8;

typedef struct ItemVt_82DF43E8 {
    void *slot[5];
    void (*update)(Item_82DF43E8 *self, float dt);
} ItemVt_82DF43E8;

typedef struct Owner_82DF43E8 {
    char pad0[0x2c];
    Item_82DF43E8 **items;
    int count;
} Owner_82DF43E8;

void fn_82DF43E8(Owner_82DF43E8 *owner, float dt)
{
    Owner_82DF43E8 *self = owner;
    int i;
    int n = self->count;

    for (i = 0; i < n; i++) {
        Item_82DF43E8 *item = self->items[i];
        if ((item->flags & 1) == 0) {
            item->time += dt;
            item->vt->update(item, dt);
        }
    }
}
