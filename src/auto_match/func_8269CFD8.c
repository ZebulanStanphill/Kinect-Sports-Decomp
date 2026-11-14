typedef struct Entry_8269CFD8 {
    int nextInChain;
    unsigned char value[0x20];
} Entry_8269CFD8;

typedef struct Table_8269CFD8 {
    unsigned int entryCount;
    unsigned int sizeMask;
    Entry_8269CFD8 entries[1];
} Table_8269CFD8;

typedef struct Hash_8269CFD8 {
    Table_8269CFD8 *table;
} Hash_8269CFD8;

typedef struct Iter_8269CFD8 {
    Hash_8269CFD8 *hash;
    unsigned int index;
} Iter_8269CFD8;

void fn_8269CFD8(Iter_8269CFD8 *out, Hash_8269CFD8 *self)
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
