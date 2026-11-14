typedef struct HashTable_826A0D90 {
    unsigned int entryCount;
    unsigned int sizeMask;
} HashTable_826A0D90;

typedef struct Hash_826A0D90 {
    HashTable_826A0D90 *table;
} Hash_826A0D90;

extern void fn_826A0C18(Hash_826A0D90 *self, void *heap, unsigned int capacity);

void fn_826A0D90(Hash_826A0D90 *self, void *heap)
{
    if (self->table == 0) {
        fn_826A0C18(self, heap, 8);
    } else if (self->table->entryCount * 5 > (self->table->sizeMask + 1) * 4) {
        fn_826A0C18(self, heap, (self->table->sizeMask + 1) * 2);
    }
}
