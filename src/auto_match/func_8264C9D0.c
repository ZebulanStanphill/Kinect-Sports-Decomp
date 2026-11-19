long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct Stamps_8264C9D0 {
    int pad0[2];
    long first;  /* 0x8 */
    long second; /* 0xc */
} Stamps_8264C9D0;

typedef struct Entry_8264C9D0 {
    unsigned int info; /* 0x0: bits 0-29 the stamps' address / 4, bit 30 the second stamp */
    unsigned int mask; /* 0x4 */
} Entry_8264C9D0;

typedef struct Block_8264C9D0 {
    struct Block_8264C9D0 *next; /* 0x0 */
    unsigned int count;          /* 0x4 */
    Entry_8264C9D0 entries[1];   /* 0x8 */
} Block_8264C9D0;

static __forceinline void RaiseStamp(long volatile *stamp, unsigned int value)
{
    unsigned int old;
    unsigned int raised;

    do {
        old = *stamp;
        if (old == 0) {
            raised = value;
        } else {
            if (value == 0) {
                return;
            }
            raised = (int)(value - old) > 0 ? value : old;
        }
        if (raised == old) {
            return;
        }
    } while (old != (unsigned int)_InterlockedCompareExchange(stamp, raised, old));
}

void fn_8264C9D0(unsigned int value, Block_8264C9D0 *block, unsigned int filter)
{
    Entry_8264C9D0 *entry;
    Stamps_8264C9D0 *stamps;
    unsigned int i;

    if (filter == 0) {
        filter = 0xffffffff;
    }
    do {
        entry = block->entries;
        for (i = block->count; i != 0; i--) {
            stamps = (Stamps_8264C9D0 *)(entry->info << 2);
            if (stamps != 0) {
                if ((entry->mask & filter) != 0) {
                    RaiseStamp(&stamps->first, value);
                }
                if ((entry->info & 0x40000000) != 0) {
                    RaiseStamp(&stamps->second, value);
                }
            }
            entry++;
        }
        block = block->next;
    } while (block != 0);
}
