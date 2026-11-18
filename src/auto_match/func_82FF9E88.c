long _InterlockedIncrement(long volatile *addend);

typedef struct Block_82FF9E88 {
    char pad0[0x40];
    long refCount; /* 0x40 */
} Block_82FF9E88;

typedef struct Buffer_82FF9E88 {
    void *data; /* 0x0 */
    int size;   /* 0x4 */
} Buffer_82FF9E88;

typedef struct Entry_82FF9E88 {
    Block_82FF9E88 *block;  /* 0x0 */
    Buffer_82FF9E88 buffer; /* 0x4 */
} Entry_82FF9E88;

typedef struct Entries_82FF9E88 {
    Entry_82FF9E88 *begin;
    Entry_82FF9E88 *end;
    Entry_82FF9E88 *limit;
} Entries_82FF9E88;

static __forceinline int Size(Entries_82FF9E88 *entries)
{
    return entries->end - entries->begin;
}

static __forceinline Entry_82FF9E88 *Front(Entries_82FF9E88 *entries)
{
    return entries->begin;
}

typedef struct Pool_82FF9E88 {
    Buffer_82FF9E88 buffer;   /* 0x00 */
    Entries_82FF9E88 entries; /* 0x08 */
    int refCount;             /* 0x14 */
} Pool_82FF9E88;

typedef struct Owner_82FF9E88 {
    char pad0[0x18];
    Block_82FF9E88 *block; /* 0x18 */
} Owner_82FF9E88;

extern int fn_82FF9B18(Pool_82FF9E88 *pool);

void fn_82FF9E88(Pool_82FF9E88 *self, Buffer_82FF9E88 *out, Owner_82FF9E88 *owner)
{
    Block_82FF9E88 *block;
    Entry_82FF9E88 *entry;

    self->refCount++;
    if (self->buffer.data != 0) {
        *out = self->buffer;
        return;
    }
    if (Size(&self->entries) != 0) {
        entry = Front(&self->entries);
        block = entry->block;
        *out = entry->buffer;
        owner->block = block;
        _InterlockedIncrement(&block->refCount);
        return;
    }
    out->data = 0;
    out->size = 0;
    fn_82FF9B18(self);
}
