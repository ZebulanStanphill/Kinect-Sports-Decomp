typedef struct Entry_82A45308 {
    unsigned int desc;
    char pad4[0x3c];
    unsigned int *descPtr;
    char pad44[0x1c];
} Entry_82A45308;
typedef struct Table_82A45308 {
    int pad0;
    unsigned int flags;
    Entry_82A45308 *entries;
} Table_82A45308;
static __forceinline unsigned char GetFormatKind(Table_82A45308 *self, int index)
{
    unsigned int desc;
    if ((self->flags & 0x20000) != 0)
        desc = self->entries[index].desc;
    else
        desc = *self->entries[index].descPtr;
    return (desc >> 20) & 3;
}
unsigned char fn_82A45308(Table_82A45308 *self, int index)
{
    return 0 == GetFormatKind(self, index);
}
