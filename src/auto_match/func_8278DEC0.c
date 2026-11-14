typedef struct Table_8278DEC0 {
    unsigned int entryCount;
    unsigned int sizeMask;
} Table_8278DEC0;

typedef struct Hash_8278DEC0 {
    Table_8278DEC0 *table;
} Hash_8278DEC0;

extern void fn_8278DD08(Hash_8278DEC0 *self, void *heap, unsigned int capacity);

void fn_8278DEC0(Hash_8278DEC0 *self, void *heap)
{
    if (self->table == 0) {
        fn_8278DD08(self, heap, 8);
    } else if (self->table->entryCount * 5 > (self->table->sizeMask + 1) * 4) {
        fn_8278DD08(self, heap, (self->table->sizeMask + 1) * 2);
    }
}
