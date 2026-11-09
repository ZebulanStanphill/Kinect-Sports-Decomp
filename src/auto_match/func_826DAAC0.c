/* Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore) with the
   hash value cached in each entry; entries hold node pointers compared by their key field. */
typedef struct Node_826DAAC0 {
    int pad0;
    int pad4;
    int key;
} Node_826DAAC0;

typedef struct Entry_826DAAC0 {
    int next;
    unsigned int hash;
    Node_826DAAC0 *value;
} Entry_826DAAC0;

typedef struct Table_826DAAC0 {
    int entryCount;
    unsigned int sizeMask;
    Entry_826DAAC0 entries[1];
} Table_826DAAC0;

typedef struct Hash_826DAAC0 {
    Table_826DAAC0 *table;
} Hash_826DAAC0;

int fn_826DAAC0(Hash_826DAAC0 *h, Node_826DAAC0 **key, unsigned int hashValue)
{
    int index = hashValue;
    Entry_826DAAC0 *e = &h->table->entries[index];
    if (e->next == -2 || e->hash != (unsigned int)index) {
        return -1;
    }
    for (;;) {
        if (e->hash == hashValue && e->value->key == (*key)->key) {
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
