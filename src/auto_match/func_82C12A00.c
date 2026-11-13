typedef struct Item_82C12A00 { char pad[0x40]; void *pool; char pad44[4]; } Item_82C12A00;
typedef struct Obj_82C12A00 { char pad[0x14]; Item_82C12A00 *item; } Obj_82C12A00;
extern int fn_82C10B28(void *pool, int kind, Item_82C12A00 **pp);
extern void fn_82C12978(Item_82C12A00 *item, void *p);
int fn_82C12A00(Obj_82C12A00 *o)
{
    int r = 0;
    Item_82C12A00 *item = o->item;
    fn_82C12978(item, &item->pad44);
    if (o->item != 0) {
        r = fn_82C10B28(item->pool, 3, &o->item);
    }
    return r;
}
