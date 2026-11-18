typedef struct CriticalSection_82A381F0 {
    int data[7];
} CriticalSection_82A381F0;

typedef struct Entry_82A381F0 {
    unsigned int key; /* 0x00 */
    int link;         /* 0x04 */
    char pad8[0x8];
    unsigned int target; /* 0x10 */
    char pad14[0x44];
} Entry_82A381F0;

typedef struct Table_82A381F0 {
    int m0;                  /* 0x00 */
    Entry_82A381F0 *entries; /* 0x04 */
    unsigned int count;      /* 0x08 */
    char padc[0x8];
    CriticalSection_82A381F0 lock; /* 0x14 */
} Table_82A381F0;

extern void RtlEnterCriticalSection(CriticalSection_82A381F0 *section);
extern void RtlLeaveCriticalSection(CriticalSection_82A381F0 *section);

Entry_82A381F0 *fn_82A381F0(Table_82A381F0 *self, unsigned int key, int exact)
{
    unsigned int index;
    unsigned int i;
    Entry_82A381F0 *entry;

    RtlEnterCriticalSection(&self->lock);
    index = ((key & 0x7ffffff) / 12) % self->count;
    for (i = 0; i < self->count; i++) {
        if (self->entries[index].key == key) {
            break;
        }
        index = (index + 1) % self->count;
    }
    RtlLeaveCriticalSection(&self->lock);
    entry = &self->entries[index];
    if (entry->key == key) {
        if (exact == 0 && entry->link == -1) {
            index = entry->target;
        }
        return &self->entries[index];
    }
    return 0;
}
