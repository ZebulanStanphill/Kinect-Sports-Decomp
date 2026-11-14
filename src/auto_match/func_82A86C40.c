void *memcpy(void *dst, const void *src, unsigned int n);
typedef struct Value_82A86C40 {
    unsigned int v[4];
} Value_82A86C40;

typedef struct Entry_82A86C40 {
    int unk0;
    int key;              /* 0x4 */
    Value_82A86C40 value; /* 0x8 */
} Entry_82A86C40;

typedef struct Item_82A86C40 {
    int unk0;
    Entry_82A86C40 entries[20]; /* 0x4 */
    char pad1e4[0x1c];
} Item_82A86C40;

typedef struct Owner_82A86C40 {
    char pad0[0x14];
    int count;               /* 0x14 */
    char pad18[0x14];
    Item_82A86C40 *items;    /* 0x2c */
} Owner_82A86C40;

static __forceinline void SetValue(Item_82A86C40 *item, int key, const Value_82A86C40 *value)
{
    int j;
    for (j = 19; j >= 0; j--) {
        Entry_82A86C40 *e = &item->entries[j];
        if (e->key == key)
            memcpy(&e->value, value, sizeof(e->value));
    }
}

void fn_82A86C40(Owner_82A86C40 *self, int key, const Value_82A86C40 *value)
{
    int i;

    if (key == 0)
        return;
    for (i = self->count - 1; i >= 0; i--)
        SetValue(&self->items[i], key, value);
}
