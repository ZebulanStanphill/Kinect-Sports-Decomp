typedef struct Entry_82A458C8 {
    unsigned int desc;
    char pad4[0x3c];
    unsigned int *descPtr;
    char pad44[0x1c];
} Entry_82A458C8;
typedef struct Table_82A458C8 {
    int pad0;
    unsigned int flags;
    Entry_82A458C8 *entries;
} Table_82A458C8;
unsigned int fn_82A458C8(Table_82A458C8 *self, int index)
{
    unsigned int desc;
    if ((self->flags & 0x20000) != 0)
        desc = self->entries[index].desc;
    else
        desc = *self->entries[index].descPtr;
    return (desc >> 12) & 0xff;
}
