typedef struct Item_82997E38 {
    char padding[0x10];
    unsigned int kind;
} Item_82997E38;

typedef struct Context_82997E38 {
    char padding[0x14];
    Item_82997E38 **items;
} Context_82997E38;

typedef struct List_82997E38 {
    char padding[0xc];
    unsigned int count;
    unsigned int *indices;
} List_82997E38;

extern void *memset(void *, int, unsigned int);

int fn_82997E38(Context_82997E38 *self, List_82997E38 *list)
{
    unsigned int present[4];
    unsigned int index;
    int all;
    int missing;
    int result = 0;
    int i;
    memset(present, 0, sizeof(present));
    for (index = 0; index < list->count; index++) {
        unsigned int kind = self->items[list->indices[index]]->kind;
        if (kind > 3) {
            return 0;
        }
        present[kind] = 1;
    }
    all = 1;
    missing = 0;
    for (i = 0; i < 3; i++) {
        if (present[i] != 0) {
            all = 0;
        } else {
            missing = 1;
        }
    }
    if (missing && !all) {
        result = 1;
    }
    return result;
}
