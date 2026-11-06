typedef struct Item_82D6BB68 Item_82D6BB68;
typedef struct {
    int slots[10];
    void (*update)(Item_82D6BB68 *, float, float, int);
} ItemVt_82D6BB68;
struct Item_82D6BB68 { ItemVt_82D6BB68 *vt; };
typedef struct {
    int key;
    Item_82D6BB68 *item;
} Entry_82D6BB68;
typedef struct {
    int f0;
    int f4;
    int f8;
    Entry_82D6BB68 *entries;
    int count;
} Obj_82D6BB68;

void fn_82D6BB68(Obj_82D6BB68 *self, float a, float b, int c)
{
    int i;

    for (i = 0; i < self->count; i++) {
        self->entries[i].item->vt->update(self->entries[i].item, a, b, c);
    }
}
