typedef struct HashTable_826DB220 {
    unsigned int entryCount;
    unsigned int sizeMask;
} HashTable_826DB220;

typedef struct Hash_826DB220 {
    HashTable_826DB220 *table;
} Hash_826DB220;

extern void fn_826DB0B0(Hash_826DB220 *self, void *heap, unsigned int capacity);

void fn_826DB220(Hash_826DB220 *self, void *heap)
{
    if (self->table == 0) {
        fn_826DB0B0(self, heap, 8);
    } else if (self->table->entryCount * 5 > (self->table->sizeMask + 1) * 4) {
        fn_826DB0B0(self, heap, (self->table->sizeMask + 1) * 2);
    }
}
