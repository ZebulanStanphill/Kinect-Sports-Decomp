typedef struct Item_826B3578 {
    int pad0;
    unsigned char type;
} Item_826B3578;

typedef struct Obj_826B3578 {
    char pad0[0x27c];
    char table[4];
} Obj_826B3578;

typedef struct Entry_826B3578 {
    int key;
    int value;
} Entry_826B3578;

extern Entry_826B3578 *fn_826AB1B8(void *table, int *key);
extern int *fn_826AF6F8(void *table, int *key);
extern void fn_826B33C0(void *table, int *key, unsigned char big);

static __forceinline int *Find(void *table, int *key)
{
    Entry_826B3578 *e = fn_826AB1B8(table, key);
    return e ? &e->value : 0;
}

int fn_826B3578(Obj_826B3578 *self, Item_826B3578 *item, int *key)
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
    fn_826B33C0(table, key, item->type > 6);
    return 1;
}
