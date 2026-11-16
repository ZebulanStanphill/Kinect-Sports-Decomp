typedef struct Entry_82A6C2A8 {
    int unused;
    void *items;
    char padding08[0x88 - 8];
    void *pairs;
    void *flags;
    char padding90[8];
} Entry_82A6C2A8;

extern void *fn_82C2B580(unsigned int size);
extern void *memset(void *destination, int value, unsigned int size);

int fn_82A6C2A8(Entry_82A6C2A8 **out, int count)
{
    int index;
    int result = 0;
    *out = 0;
    *out = (Entry_82A6C2A8 *)fn_82C2B580(count * sizeof(Entry_82A6C2A8));
    if (*out == 0) {
        goto failed;
    }
    memset(*out, 0, count * sizeof(Entry_82A6C2A8));
    for (index = 0; index < count; ++index) {
        Entry_82A6C2A8 *entry = &(*out)[index];
        entry->items = fn_82C2B580(count * 4);
        if (entry->items == 0) {
            goto failed;
        }
        if (count > 1) {
            entry->pairs = fn_82C2B580((count - 1) * count / 2);
            if (entry->pairs == 0) {
                goto failed;
            }
            memset(entry->pairs, 0, (unsigned int)((count - 1) * count) / 2);
        }
        entry->flags = fn_82C2B580(count);
        if (entry->flags == 0) {
            goto failed;
        }
        memset(entry->flags, 0, count);
    }
done:
    return result;
failed:
    result = 0x8007000e;
    goto done;
}
