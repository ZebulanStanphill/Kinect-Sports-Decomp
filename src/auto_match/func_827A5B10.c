typedef struct Entry_827A5B10 {
    int nextInChain;
    unsigned char value[0x10];
} Entry_827A5B10;

typedef struct Table_827A5B10 {
    unsigned int entryCount;
    unsigned int sizeMask;
    Entry_827A5B10 entries[1];
} Table_827A5B10;

typedef struct Hash_827A5B10 {
    Table_827A5B10 *table;
} Hash_827A5B10;

typedef struct Iter_827A5B10 {
    Hash_827A5B10 *hash;
    unsigned int index;
} Iter_827A5B10;

void fn_827A5B10(Iter_827A5B10 *out, Hash_827A5B10 *self)
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
