typedef struct Slot_82E92098 {
    int key;
    void *value;
} Slot_82E92098;

typedef struct Item_82E92098 {
    float x;           /* 0x00 */
    float y;           /* 0x04 */
    float z;           /* 0x08 */
    int pad0c;         /* 0x0c */
    int count;         /* 0x10 */
    float weight;      /* 0x14 */
    char pad18[0x800]; /* 0x18 */
    int active;        /* 0x818 */
} Item_82E92098;

typedef struct Table_82E92098 {
    Slot_82E92098 *slots; /* 0x00 */
    unsigned int count;   /* 0x04 */
} Table_82E92098;

void fn_82E92098(Table_82E92098 *table, unsigned int index)
{
    unsigned int entry = index;
    Item_82E92098 *item;
    unsigned int k;

    if (table->slots == 0) {
        return;
    }
    if (entry >= table->count) {
        return;
    }
    item = (Item_82E92098 *)table->slots[entry * 5].value;
    item->weight = 0.0f;
    item->active = 0;
    item->x = 0.0f;
    item->count = 0;
    item->y = 0.0f;
    item->z = 0.0f;
    for (k = 0; k < 3; k++) {
        table->slots[entry * 5 + k + 1].key = 0;
        table->slots[entry * 5 + k + 1].value = 0;
    }
    table->slots[entry * 5 + 4].key = 0;
    table->slots[entry * 5 + 4].value = 0;
}
