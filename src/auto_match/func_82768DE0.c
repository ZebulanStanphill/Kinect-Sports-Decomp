typedef struct Entry_82768DE0 {
    int nextInChain;
    unsigned char value[0x4];
} Entry_82768DE0;

typedef struct Table_82768DE0 {
    unsigned int entryCount;
    unsigned int sizeMask;
    Entry_82768DE0 entries[1];
} Table_82768DE0;

typedef struct Hash_82768DE0 {
    Table_82768DE0 *table;
} Hash_82768DE0;

typedef struct Iter_82768DE0 {
    Hash_82768DE0 *hash;
    unsigned int index;
} Iter_82768DE0;

void fn_82768DE0(Iter_82768DE0 *out, Hash_82768DE0 *self)
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
