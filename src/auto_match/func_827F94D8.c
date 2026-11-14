typedef struct Entry_827F94D8 {
    char data[0x34];
} Entry_827F94D8;

typedef struct Obj_827F94D8 {
    char pad0[0x8];
    Entry_827F94D8 *entries; /* 0x8 */
} Obj_827F94D8;

extern void fn_82810360(Entry_827F94D8 *entry, void *out);

void fn_827F94D8(Obj_827F94D8 *self, int index, void *out)
{
    fn_82810360(&self->entries[index], out);
}
