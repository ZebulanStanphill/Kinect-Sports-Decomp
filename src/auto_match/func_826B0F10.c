typedef struct Item_826B0F10 {
    int pad0;
    unsigned char type;
} Item_826B0F10;

typedef struct Obj_826B0F10 {
    char pad0[0x27c];
    char table[4];
} Obj_826B0F10;

typedef struct Entry_826B0F10 {
    int key;
    int value;
} Entry_826B0F10;

extern Entry_826B0F10 *fn_826AB1B8(void *table, int *key);
extern int *fn_826AF6F8(void *table, int *key);
extern void fn_826C3768(void *dst, int *src);

static __forceinline int *Find(void *table, int *key)
{
    Entry_826B0F10 *e = fn_826AB1B8(table, key);
    return e ? &e->value : 0;
}

int fn_826B0F10(Obj_826B0F10 *self, Item_826B0F10 *item, int *key, void *out)
{
    void *table = self->table;
    int *found;

    if (item->type > 6) {
        found = Find(table, key);
    } else {
        found = fn_826AF6F8(table, key);
    }
    if (found == 0) {
        return 0;
    }
    if (out != 0) {
        fn_826C3768(out, found);
    }
    return 1;
}
