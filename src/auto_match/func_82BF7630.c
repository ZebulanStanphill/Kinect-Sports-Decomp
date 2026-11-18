typedef struct Entry_82BF7630 {
    int pad0;
    int pad4;
    unsigned int key;            /* 0x08 */
    unsigned int value;          /* 0x0c */
    struct Entry_82BF7630 *next; /* 0x10 */
    unsigned int hash;           /* 0x14 */
} Entry_82BF7630;

typedef struct HashTable_82BF7630 {
    int pad0;
    int pad4;
    Entry_82BF7630 **buckets; /* 0x08 */
    unsigned int bucketCount; /* 0x0c */
} HashTable_82BF7630;

void fn_82BF7630(HashTable_82BF7630 *table, Entry_82BF7630 **iterator, unsigned int *key, unsigned int *value)
{
    Entry_82BF7630 *entry;
    Entry_82BF7630 *next;
    unsigned int i;

    if (table == 0) {
        return;
    }
    if (table->buckets == 0) {
        return;
    }
    entry = *iterator;
    if (entry == 0) {
        return;
    }
    if (entry == (Entry_82BF7630 *)-1) {
        for (i = 0; i < table->bucketCount; i++) {
            entry = table->buckets[i];
            if (entry != 0) {
                break;
            }
        }
        if (entry == 0) {
            *iterator = 0;
            return;
        }
    }
    next = entry->next;
    if (next == 0) {
        for (i = entry->hash % table->bucketCount + 1; i < table->bucketCount; i++) {
            next = table->buckets[i];
            if (next != 0) {
                break;
            }
        }
    }
    *iterator = next;
    *key = entry->key;
    *value = entry->value;
}
