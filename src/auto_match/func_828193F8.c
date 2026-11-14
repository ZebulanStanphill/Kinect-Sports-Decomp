typedef struct Item_828193F8 {
    char data[0x40];
} Item_828193F8;

extern void fn_82822E38(Item_828193F8 *item);

void fn_828193F8(Item_828193F8 *items, short i)
{
    fn_82822E38(&items[i]);
}
