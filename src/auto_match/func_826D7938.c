int strcmp(const char *, const char *);

typedef struct Entry_826D7938 {
    int next;
    unsigned int hash;
    unsigned int key;
} Entry_826D7938;

typedef struct Table_826D7938 {
    int entryCount;
    unsigned int sizeMask;
    Entry_826D7938 entries[1];
} Table_826D7938;

typedef struct Hash_826D7938 {
    Table_826D7938 *table;
} Hash_826D7938;

int fn_826D7938(Hash_826D7938 *h, unsigned int *key, unsigned int hashValue)
{
    int index = hashValue;
    Entry_826D7938 *e = &h->table->entries[index];
    if (e->next == -2 || e->hash != (unsigned int)index) {
        return -1;
    }
    for (;;) {
        if (e->hash == hashValue &&
            strcmp((const char *)((e->key & ~3u) + 8),
                   (const char *)((*key & ~3u) + 8)) == 0) {
            return index;
        }
        index = e->next;
        if (index == -1) {
            break;
        }
        e = &h->table->entries[index];
    }
    return -1;
}
