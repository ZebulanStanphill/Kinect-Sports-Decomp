typedef struct Entry_82954BA8 {
    char pad[0x10];
    unsigned int id;
    char pad14[0x10];
} Entry_82954BA8;

Entry_82954BA8 *fn_82954BA8(void *self, Entry_82954BA8 *entry, unsigned int id)
{
    for (; entry->id != 0xffffffff && entry->id != id; entry++) {
    }
    return entry;
}
