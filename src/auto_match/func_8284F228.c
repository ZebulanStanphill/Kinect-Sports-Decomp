int strcmp(const char *a, const char *b);

typedef struct Entry_8284F228 {
    const char *group;          /* 0x00 */
    const char *name;           /* 0x04 */
    char pad8[0x64 - 8];
} Entry_8284F228;

typedef struct Desc_8284F228 {
    char pad0[8];
    int count;                  /* 0x08 */
    Entry_8284F228 *entries;    /* 0x0c */
} Desc_8284F228;

typedef struct Item_8284F228 {
    char data[0xf0];
} Item_8284F228;

typedef struct Self_8284F228 {
    Desc_8284F228 *desc;        /* 0x00 */
    int pad4;
    Item_8284F228 *items;       /* 0x08 */
} Self_8284F228;

int fn_8284F228(Self_8284F228 *self, const char *group, const char *name, Item_8284F228 **out)
{
    int i;

    for (i = 0; i < self->desc->count; i++) {
        if (strcmp(self->desc->entries[i].group, group) == 0 && strcmp(self->desc->entries[i].name, name) == 0) {
            *out = &self->items[i];
            return 1;
        }
    }
    return 0;
}
