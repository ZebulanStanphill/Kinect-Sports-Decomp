typedef struct {
    int next;
    unsigned int hash;
    unsigned short value;
} Entry_827B11C8;

typedef struct {
    int entryCount;
    unsigned int sizeMask;
    Entry_827B11C8 entries[1];
} Table_827B11C8;

typedef struct {
    Table_827B11C8 *table;
} Hash_827B11C8;

int fn_827B11C8(Hash_827B11C8 *h, const unsigned short *key, unsigned int hashValue)
{
    int index = hashValue;
    Entry_827B11C8 *e = &h->table->entries[index];
    if (e->next == -2 || e->hash != (unsigned int)index) {
        return -1;
    }
    for (;;) {
        if (e->hash == hashValue && e->value == *key) {
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
