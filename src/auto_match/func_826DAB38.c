typedef struct {
    int pad0;
    int pad4;
    int key;
} Node_826DAB38;

typedef struct {
    int next;
    unsigned int hash;
    Node_826DAB38 *value;
} Entry_826DAB38;

typedef struct {
    int entryCount;
    unsigned int sizeMask;
    Entry_826DAB38 entries[1];
} Table_826DAB38;

typedef struct {
    Table_826DAB38 *table;
} Hash_826DAB38;

int fn_826DAB38(Hash_826DAB38 *h, int *key, unsigned int hashValue)
{
    int index = hashValue;
    Entry_826DAB38 *e = &h->table->entries[index];
    if (e->next == -2 || e->hash != (unsigned int)index) {
        return -1;
    }
    for (;;) {
        if (e->hash == hashValue && e->value->key == *key) {
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
