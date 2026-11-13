typedef struct { int a, b; } Entry_82D9E7D0;
typedef struct { char pad[0x4c]; Entry_82D9E7D0 *entries; } Context_82D9E7D0;
typedef struct { char data[0x10]; } Slot_82D9E7D0;
typedef struct {
    char pad0[0x50];
    Slot_82D9E7D0 slots[6];
    int pad_b0[2];
    int count;
} Obj_82D9E7D0;

typedef struct {
    Slot_82D9E7D0 *slot;
    Entry_82D9E7D0 *entry;
    float value;
    int one;
} Item_82D9E7D0;

extern void fn_830A5EA8(Item_82D9E7D0 *item, Context_82D9E7D0 *ctx, void *out);

void fn_82D9E7D0(void *unused, int **cursor, float **values, void *unused2, Obj_82D9E7D0 *obj,
                 Context_82D9E7D0 *ctx, void *out)
{
    Item_82D9E7D0 item;
    float *value;
    int index;
    Entry_82D9E7D0 *entries = ctx->entries;

    index = *++*cursor;
    value = *values;
    *values = value + 4;
    item.slot = &obj->slots[index];
    item.value = *value;
    item.one = 1;
    item.entry = &entries[obj->count];
    fn_830A5EA8(&item, ctx, out);
    obj->count++;
}
