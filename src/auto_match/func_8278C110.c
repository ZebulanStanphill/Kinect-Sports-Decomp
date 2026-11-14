typedef struct Entry_8278C110 {
    int nextInChain;
    unsigned char value[0x8];
} Entry_8278C110;

typedef struct Table_8278C110 {
    unsigned int entryCount;
    unsigned int sizeMask;
    Entry_8278C110 entries[1];
} Table_8278C110;

typedef struct Hash_8278C110 {
    Table_8278C110 *table;
} Hash_8278C110;

typedef struct Iter_8278C110 {
    Hash_8278C110 *hash;
    unsigned int index;
} Iter_8278C110;

void fn_8278C110(Iter_8278C110 *out, Hash_8278C110 *self)
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
