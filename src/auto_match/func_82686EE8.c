typedef struct Entry_82686EE8 {
    int nextInChain;
    unsigned char value[0xc];
} Entry_82686EE8;

typedef struct Table_82686EE8 {
    unsigned int entryCount;
    unsigned int sizeMask;
    Entry_82686EE8 entries[1];
} Table_82686EE8;

typedef struct Hash_82686EE8 {
    Table_82686EE8 *table;
} Hash_82686EE8;

typedef struct Iter_82686EE8 {
    Hash_82686EE8 *hash;
    unsigned int index;
} Iter_82686EE8;

void fn_82686EE8(Iter_82686EE8 *out, Hash_82686EE8 *self)
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
