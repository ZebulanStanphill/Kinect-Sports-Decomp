int strcmp(const char *a, const char *b);

typedef struct Item_8285AA40 {
    char pad[0x38];
    const char *name;          /* 0x38 */
} Item_8285AA40;

typedef struct Table_8285AA40 {
    char pad[0x40];
    Item_8285AA40 **items;     /* 0x40 */
    unsigned short count;      /* 0x44 */
} Table_8285AA40;

void fn_8285AA40(Table_8285AA40 *table, int unused, const char *name, Item_8285AA40 **out)
{
    int i;

    for (i = 0; i < table->count; i++) {
        Item_8285AA40 *item = table->items[i];
        if (strcmp(name, item->name) == 0) {
            *out = item;
            return;
        }
    }
    *out = 0;
}
