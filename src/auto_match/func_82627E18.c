typedef struct { char pad[0x30]; void *res; char pad2[0x96 - 0x34]; unsigned char released; } Item;
extern void fn_8253D5A0(void *list, void *owner, void *res);
extern void fn_82CE4118(void *res);

void fn_82627E18(char *self, Item *item)
{
    if (item->res != 0 && item->released == 0) {
        item->released = 1;
        fn_8253D5A0(self + 0x1f0, self, item->res);
        fn_82CE4118(item->res);
        item->res = 0;
    }
}
