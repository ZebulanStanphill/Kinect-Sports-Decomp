typedef struct Entry_827CB6C8 {
    int pad[6];
    int value;
    int pad2;
} Entry_827CB6C8;

Entry_827CB6C8 *fn_827CB6C8(Entry_827CB6C8 *entries, int count)
{
    int best;
    Entry_827CB6C8 *result;
    int i;

    best = 0;
    result = 0;
    for (i = 0; i < count; i++) {
        if (entries[i].value > best) {
            result = &entries[i];
            best = entries[i].value;
        }
    }
    return result;
}
