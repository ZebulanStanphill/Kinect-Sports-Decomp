typedef struct Item_82D5B288 {
    char pad[0xb];
    unsigned char flags;
    int pad2;
    int data;
} Item_82D5B288;

extern void fn_82D69A20(void *a, Item_82D5B288 *item, void *c, void *d, void *e);
extern void fn_82D70D40(int *data, void *e);

void fn_82D5B288(void *a, Item_82D5B288 *item, void *c, void *d, void *e)
{
    if (item->flags & 0x20) {
        fn_82D69A20(a, item, c, d, e);
        return;
    }
    fn_82D70D40(&item->data, e);
}
