typedef struct Entry_826BE090 {
    int nextInChain;
    unsigned char value[0x2c];
} Entry_826BE090;

typedef struct Table_826BE090 {
    unsigned int entryCount;
    unsigned int sizeMask;
    Entry_826BE090 entries[1];
} Table_826BE090;

typedef struct Hash_826BE090 {
    Table_826BE090 *table;
} Hash_826BE090;

typedef struct Iter_826BE090 {
    Hash_826BE090 *hash;
    unsigned int index;
} Iter_826BE090;

void fn_826BE090(Iter_826BE090 *out, Hash_826BE090 *self)
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
