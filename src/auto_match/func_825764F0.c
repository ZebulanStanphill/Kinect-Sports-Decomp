typedef struct Item_825764F0 {
    unsigned int id;
    char pad4[0x110 - 4];
    char name[0x80];
} Item_825764F0;

typedef struct List_825764F0 {
    char pad0[8];
    Item_825764F0 **items;
    int padC;
    unsigned int count;
} List_825764F0;

extern int fn_82F6B0C0(const char *a, const char *b, unsigned int n);

Item_825764F0 *fn_825764F0(List_825764F0 *list, const char *name, Item_825764F0 *after)
{
    unsigned char found = 0;
    unsigned int i;

    for (i = 0; i < list->count; i++) {
        if (list->items[i] != 0) {
            if (!found) {
                if (list->items[i]->id == after->id) {
                    found = 1;
                }
            } else if (fn_82F6B0C0(list->items[i]->name, name, 0x80) == 0) {
                return list->items[i];
            }
        }
    }
    return 0;
}
