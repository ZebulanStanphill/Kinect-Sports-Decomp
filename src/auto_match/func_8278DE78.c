typedef struct HashTable_8278DE78 {
    unsigned int entryCount;
    unsigned int sizeMask;
} HashTable_8278DE78;

typedef struct Hash_8278DE78 {
    HashTable_8278DE78 *table;
} Hash_8278DE78;

extern void fn_8278DB90(Hash_8278DE78 *self, void *heap, unsigned int capacity);

void fn_8278DE78(Hash_8278DE78 *self, void *heap)
{
    if (self->table == 0) {
        fn_8278DB90(self, heap, 8);
    } else if (self->table->entryCount * 5 > (self->table->sizeMask + 1) * 4) {
        fn_8278DB90(self, heap, (self->table->sizeMask + 1) * 2);
    }
}
