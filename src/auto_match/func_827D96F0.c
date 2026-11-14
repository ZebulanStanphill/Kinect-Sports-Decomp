typedef struct Item_827D96F0 {
    char pad0[0x14];
    unsigned int value;
} Item_827D96F0;

extern unsigned int fn_827D75C0(void *table, Item_827D96F0 *item);

unsigned int fn_827D96F0(Item_827D96F0 *item, void *table)
{
    if (item->value == 0) {
        return fn_827D75C0(table, item);
    }
    return item->value;
}
