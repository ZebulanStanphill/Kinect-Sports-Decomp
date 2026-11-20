typedef struct Entry_826AB3F8 {
    unsigned int next; /* 0x0 */
    int key;           /* 0x4 */
    int value;         /* 0x8 */
} Entry_826AB3F8;

typedef struct Table_826AB3F8 {
    unsigned int count; /* 0x0 */
    unsigned int mask;  /* 0x4 */
} Table_826AB3F8;

static __forceinline unsigned int HashBytes(const void *key, unsigned int size, unsigned int seed)
{
    const unsigned char *data = (const unsigned char *)key;
    unsigned int hash = seed;
    while (size > 0) {
        size--;
        hash = hash * 0x1003f + data[size];
    }
    return hash;
}

unsigned int fn_826AB3F8(Table_826AB3F8 **set, const int *key, unsigned int index)
{
    Table_826AB3F8 *table = *set;
    Entry_826AB3F8 *entry = (Entry_826AB3F8 *)(table + 1) + index;
    unsigned int result = index;
    unsigned int mask;

    if (entry->next != 0xfffffffe) {
        mask = table->mask;
        if ((HashBytes(&entry->key, sizeof(entry->key), 0x1505) & mask) == index) {
            for (;;) {
                if ((HashBytes(&entry->key, sizeof(entry->key), 0x1505) & mask) == index &&
                    entry->key == *key) {
                    return result;
                }
                result = entry->next;
                if (result == 0xffffffff) {
                    break;
                }
                entry = (Entry_826AB3F8 *)(table + 1) + result;
            }
        }
    }
    return 0xffffffff;
}
