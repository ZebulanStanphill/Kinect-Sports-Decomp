int strcmp(const char *, const char *);

typedef struct Entry_8271A488 {
    int next;
    unsigned int hash;
    unsigned int key;
    int rest[2];
} Entry_8271A488;

typedef struct Table_8271A488 {
    int entryCount;
    unsigned int sizeMask;
    Entry_8271A488 entries[1];
} Table_8271A488;

typedef struct Hash_8271A488 {
    Table_8271A488 *table;
} Hash_8271A488;

int fn_8271A488(Hash_8271A488 *h, unsigned int *key, unsigned int hashValue)
{
    int index = hashValue;
    Entry_8271A488 *e = &h->table->entries[index];
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
