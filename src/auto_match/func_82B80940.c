typedef struct Item_82B80940 {
    unsigned int pad0 : 14;
    unsigned int id : 14;
    unsigned int mask : 4; /* 0x0 */
    int pad4;
} Item_82B80940;

typedef struct Entry_82B80940 {
    unsigned int pad0 : 1;
    unsigned int scanAll : 1;
    unsigned int pad2 : 13;
    unsigned int count : 14;
    unsigned int pad29 : 3; /* 0x0 */
    char pad4[0x18];
    Item_82B80940 *items; /* 0x1c */
    char pad20[0x8];
} Entry_82B80940;

typedef struct Context_82B80940 {
    char pad0[0xc];
    Entry_82B80940 *entries; /* 0xc */
} Context_82B80940;

extern void fn_82AE7308(Context_82B80940 *ctx, unsigned int index);

void fn_82B80940(Context_82B80940 *ctx, unsigned int index, unsigned int slot, unsigned int *outId,
                 unsigned int *outMask, unsigned int *outFirst, unsigned int *outEnd, int *outCount)
{
    Entry_82B80940 *entry;
    unsigned int count;
    unsigned int id;
    unsigned int mask;
    unsigned int first;
    unsigned int end;
    unsigned int i;
    int matches;

    entry = &ctx->entries[index];
    count = entry->count;
    if (entry->items == 0) {
        fn_82AE7308(ctx, index);
    }
    first = slot;
    end = slot + 1;
    id = entry->items[slot].id;
    mask = entry->items[slot].mask;
    matches = 0;
    if (entry->scanAll) {
        mask = 0;
        for (i = 0; i < count; i++) {
            if (entry->items[i].id == id) {
                matches++;
                mask |= entry->items[i].mask;
            }
        }
    } else {
        while (first != 0 && entry->items[first - 1].id == id) {
            mask |= entry->items[first - 1].mask;
            first--;
        }
        while (end < count && entry->items[end].id == id) {
            mask |= entry->items[end].mask;
            end++;
        }
        matches = end - first;
    }
    *outId = id;
    *outMask = mask;
    *outFirst = first;
    *outEnd = end;
    *outCount = matches;
}
