/* Orders a list of item ids by the key of their entries (selection sort over an index array,
   ties broken by position), then rewrites the list in that order. */

typedef struct Entry_829684D8 {
    char pad0[0x10];
    unsigned int key; /* 0x10 */
} Entry_829684D8;

typedef struct Context_829684D8 {
    char pad0[0x14];
    Entry_829684D8 **entries; /* 0x14 */
} Context_829684D8;

int fn_829684D8(Context_829684D8 *ctx, unsigned int *ids, unsigned int *order, unsigned int count, int sort)
{
    unsigned int sorted[4];
    unsigned int i;
    unsigned int j;
    unsigned int best;
    unsigned int bestKey;
    unsigned int key;
    unsigned int held;

    if (sort != 0) {
        for (i = 0; i < count; i++) {
            order[i] = i;
        }
        for (i = 0; i < count; i++) {
            best = i;
            bestKey = ctx->entries[ids[order[i]]]->key;
            for (j = i + 1; j < count; j++) {
                key = ctx->entries[ids[order[j]]]->key;
                if (key < bestKey || (key == bestKey && j < best)) {
                    best = j;
                    bestKey = key;
                }
            }
            held = order[i];
            order[i] = order[best];
            order[best] = held;
        }
    }
    for (i = 0; i < count; i++) {
        sorted[i] = ids[order[i]];
    }
    for (i = 0; i < count; i++) {
        ids[i] = sorted[i];
    }
    return 0;
}
