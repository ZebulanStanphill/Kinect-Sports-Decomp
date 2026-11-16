typedef struct Entry_82C2ED98 {
    int reserved00;
    void *indices; /* 0x04 */
    char reserved08[0x80];
    void *pairs; /* 0x88 */
    void *flags; /* 0x8c */
    char reserved90[8];
} Entry_82C2ED98;

extern void *fn_82C2B580(int size);
extern void *memset(void *data, int value, unsigned int size);

int fn_82C2ED98(Entry_82C2ED98 **out, int count)
{
    int result = 0;
    int index;
    *out = 0;
    *out = (Entry_82C2ED98 *)fn_82C2B580(count * sizeof(Entry_82C2ED98));
    if (*out == 0) {
        result = 0x8007000e;
        goto done;
    }
    memset(*out, 0, count * sizeof(Entry_82C2ED98));
    for (index = 0; index < count; ++index) {
        Entry_82C2ED98 *entry = &(*out)[index];
        entry->indices = fn_82C2B580(count * 4);
        if (entry->indices == 0) {
            result = 0x8007000e;
            goto done;
        }
        if (count > 1) {
            entry->pairs = fn_82C2B580((count - 1) * count / 2);
            if (entry->pairs == 0) {
                result = 0x8007000e;
                goto done;
            }
            memset(entry->pairs, 0, (unsigned int)((count - 1) * count) / 2);
        }
        entry->flags = fn_82C2B580(count);
        if (entry->flags == 0) {
            result = 0x8007000e;
            goto done;
        }
        memset(entry->flags, 0, count);
    }
done:
    return result;
}
