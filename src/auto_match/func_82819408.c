typedef struct Entry_82819408 {
    char data[0x40];
} Entry_82819408;

typedef struct Obj_82819408 {
    char pad0[0x10];
    Entry_82819408 entries[1]; /* 0x10 */
} Obj_82819408;

extern void fn_82822E38(Entry_82819408 *entry);

void fn_82819408(Obj_82819408 *self, short index)
{
    fn_82822E38(&self->entries[index]);
}
