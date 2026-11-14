typedef struct Entry_826A9420 {
    int nextInChain;
    unsigned char value[0x1c];
} Entry_826A9420;

typedef struct Table_826A9420 {
    unsigned int entryCount;
    unsigned int sizeMask;
    Entry_826A9420 entries[1];
} Table_826A9420;

typedef struct Hash_826A9420 {
    Table_826A9420 *table;
} Hash_826A9420;

typedef struct Iter_826A9420 {
    Hash_826A9420 *hash;
    unsigned int index;
} Iter_826A9420;

void fn_826A9420(Iter_826A9420 *out, Hash_826A9420 *self)
{
    unsigned int i;

    if (self->table == 0) {
        out->hash = 0;
        out->index = 0;
        return;
    }
    i = 0;
    while (i <= self->table->sizeMask && self->table->entries[i].nextInChain == -2) {
        i++;
    }
    out->hash = self;
    out->index = i;
}
