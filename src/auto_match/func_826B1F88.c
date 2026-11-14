typedef struct HashTable_826B1F88 {
    unsigned int entryCount;
    unsigned int sizeMask;
} HashTable_826B1F88;

typedef struct Hash_826B1F88 {
    HashTable_826B1F88 *table;
} Hash_826B1F88;

extern void fn_826B1E20(Hash_826B1F88 *self, void *heap, unsigned int capacity);

void fn_826B1F88(Hash_826B1F88 *self, void *heap)
{
    if (self->table == 0) {
        fn_826B1E20(self, heap, 8);
    } else if (self->table->entryCount * 5 > (self->table->sizeMask + 1) * 4) {
        fn_826B1E20(self, heap, (self->table->sizeMask + 1) * 2);
    }
}
