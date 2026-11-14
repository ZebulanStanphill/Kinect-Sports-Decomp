typedef struct Table_8269DD58 {
    unsigned int entryCount;
    unsigned int sizeMask;
} Table_8269DD58;

typedef struct Hash_8269DD58 {
    Table_8269DD58 *table;
} Hash_8269DD58;

extern void fn_8269DB80(Hash_8269DD58 *self, void *heap, unsigned int capacity);

void fn_8269DD58(Hash_8269DD58 *self, void *heap)
{
    if (self->table == 0) {
        fn_8269DB80(self, heap, 8);
    } else if (self->table->entryCount * 5 > (self->table->sizeMask + 1) * 4) {
        fn_8269DB80(self, heap, (self->table->sizeMask + 1) * 2);
    }
}
