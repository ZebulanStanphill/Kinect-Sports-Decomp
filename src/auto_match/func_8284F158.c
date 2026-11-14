int strcmp(const char *a, const char *b);

typedef struct Entry_8284F158 {
    const char *group;          /* 0x00 */
    const char *name;           /* 0x04 */
    const char *type;           /* 0x08 */
    int index;                  /* 0x0c */
    char pad10[0x64 - 0x10];
} Entry_8284F158;

typedef struct Desc_8284F158 {
    char pad0[8];
    int count;                  /* 0x08 */
    Entry_8284F158 *entries;    /* 0x0c */
} Desc_8284F158;

typedef struct Item_8284F158 {
    char data[0xf0];
} Item_8284F158;

typedef struct Self_8284F158 {
    Desc_8284F158 *desc;        /* 0x00 */
    int pad4;
    Item_8284F158 *items;       /* 0x08 */
} Self_8284F158;

int fn_8284F158(Self_8284F158 *self, const char *group, const char *type, int index, Item_8284F158 **out)
{
    int i;

    for (i = 0; i < self->desc->count; i++) {
        if (strcmp(self->desc->entries[i].group, group) == 0 && strcmp(self->desc->entries[i].type, type) == 0 && self->desc->entries[i].index == index) {
            *out = &self->items[i];
            return 1;
        }
    }
    return 0;
}
