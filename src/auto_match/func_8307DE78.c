typedef struct Entry_8307DE78 {
    char pad[0x50];
    unsigned short id;
    char tail[14];
} Entry_8307DE78;

typedef struct Owner_8307DE78 {
    unsigned int count;
    unsigned int flags;
    Entry_8307DE78 *entries;
} Owner_8307DE78;

extern unsigned long _byteswap_ulong(unsigned long);

long fn_8307DE78(Owner_8307DE78 *self)
{
    unsigned int i;
    if (self->flags & 0x30000) {
        self->flags |= 0x10000;
        return 0;
    }
    for (i = 0; i < self->count; i++) {
        unsigned short id = self->entries[i].id;
        *(unsigned int *)(((id >> 5) + 0x1FFA8690) * 4) = _byteswap_ulong(1 << (id & 31));
        __emit(0x7C0006AC);
    }
    self->flags |= 0x10000;
    return 0;
}
