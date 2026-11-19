typedef struct Item_82699B40 Item_82699B40;

typedef struct ItemVtbl_82699B40 {
    void *pad[0x74 / 4];
    void (*Release)(Item_82699B40 *self);          /* 0x74 */
    unsigned char (*IsAlive)(Item_82699B40 *self); /* 0x78 */
} ItemVtbl_82699B40;

struct Item_82699B40 {
    const ItemVtbl_82699B40 *vt;
    char pad04[0x14 - 4];
    int id; /* 0x14 */
    char pad18[0x66 - 0x18];
    unsigned char flags; /* 0x66 */
};

typedef struct Array_82699B40 {
    Item_82699B40 **items; /* 0x00 */
    unsigned int count;    /* 0x04 */
    int capacity;          /* 0x08 */
    int dirty;             /* 0x0c */
} Array_82699B40;

extern void fn_82698C28(void);
extern unsigned int fn_82698C48(Array_82699B40 *array, unsigned int first, unsigned int last, int *key,
                                void *compare);
extern void fn_82698CC0(Item_82699B40 **holder, Item_82699B40 *item);
extern void fn_826997B0(Array_82699B40 *array, int index);
extern void fn_82699828(Array_82699B40 *array, unsigned int index, Item_82699B40 **holder);
extern void fn_8267C498(Item_82699B40 *item);

unsigned char fn_82699B40(Array_82699B40 *self, int index)
{
    Item_82699B40 **items = self->items;
    Item_82699B40 *item;
    Item_82699B40 *obj;
    unsigned char result;
    Item_82699B40 *holder;
    Item_82699B40 *entry;
    int key;
    unsigned int pos;
    int id;

    if (items[index]->flags & 0x40)
        return 0;
    obj = items[index];
    self->dirty = 0;
    if (obj != 0) {
        result = obj->vt->IsAlive(obj);
        if (result) {
            obj->vt->Release(obj);
            fn_826997B0(self, index);
        } else {
            entry = items[index];
            id = entry->id;
            if (id >= 0) {
                holder = 0;
                id = -1 - id;
                fn_82698CC0(&holder, entry);
                fn_826997B0(self, index);
                key = id;
                holder->id = id;
                pos = fn_82698C48(self, 0, self->count, &key, (void *)fn_82698C28);
                fn_82699828(self, pos, &holder);
                fn_8267C498(holder);
            }
        }
        return result;
    }
    fn_826997B0(self, index);
    return 1;
}
