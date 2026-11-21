typedef struct Entry_82A383C0 {
    void *handle; /* 0x00 */
    int id;       /* 0x04: -1 for an alias of entries[index] */
    char pad8[0x8];
    unsigned int index; /* 0x10 */
    void *event;        /* 0x14 */
    char pad18[0x3c];
    int references; /* 0x54 */
} Entry_82A383C0;

typedef struct Callbacks_82A383C0 {
    void *slot0;
    int (*close)(int id);
} Callbacks_82A383C0;

typedef struct Owner_82A383C0 {
    Callbacks_82A383C0 *callbacks;
} Owner_82A383C0;

typedef struct Table_82A383C0 {
    Owner_82A383C0 *owner;   /* 0x00 */
    Entry_82A383C0 *entries; /* 0x04 */
    int pad8;
    int count; /* 0x0c */
    int pad10;
    char lock[0x1c]; /* 0x14 */
} Table_82A383C0;

extern void RtlEnterCriticalSection(void *section);
extern void RtlLeaveCriticalSection(void *section);
extern int NtClose(void *handle);
extern Entry_82A383C0 *fn_82A381F0(Table_82A383C0 *table, unsigned int handle, int lock);

int fn_82A383C0(Table_82A383C0 *table, unsigned int handle)
{
    int status = 0;
    Entry_82A383C0 *entry;

    RtlEnterCriticalSection(table->lock);
    entry = fn_82A381F0(table, handle, 1);
    if (entry == 0) {
        RtlLeaveCriticalSection(table->lock);
        return 0xc000000f;
    } else {
        Entry_82A383C0 *target;
        Entry_82A383C0 *freed[2];
        unsigned int count;
        unsigned int i;

        if (entry->id != -1)
            target = entry;
        else
            target = &table->entries[entry->index];
        count = 0;
        if (--target->references == 0) {
            NtClose(entry->event);
            NtClose(entry->handle);
            status = table->owner->callbacks->close(entry->id);
            freed[0] = target;
            count = 1;
        }
        if (target != entry)
            freed[count++] = entry;
        for (i = 0; i < count; i++) {
            table->entries[freed[i] - table->entries].handle = (void *)-1;
            table->count--;
        }
    }
    RtlLeaveCriticalSection(table->lock);
    return status;
}
