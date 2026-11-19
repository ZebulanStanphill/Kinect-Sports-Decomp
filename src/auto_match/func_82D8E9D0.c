typedef struct Entry_82D8E9D0 {
    char padding[0x1c];
    int start; /* 0x1c */
    char padding20[0x25 - 0x20];
    unsigned char pad25 : 2; /* 0x25 */
    unsigned char state : 2;
    unsigned char rest25 : 4;
    unsigned char pad26 : 2; /* 0x26 */
    unsigned char kind : 2;
    unsigned char rest26 : 4;
    char padding27[0x4c - 0x27];
    int end; /* 0x4c */
} Entry_82D8E9D0;

typedef struct Array_82D8E9D0 {
    Entry_82D8E9D0 **data; /* 0x0 */
    int size;              /* 0x4 */
} Array_82D8E9D0;

typedef struct Owner_82D8E9D0 {
    char padding[0xb4];
    int limit; /* 0xb4 */
    char paddingB8[0xc8 - 0xb8];
    unsigned char enabled; /* 0xc8 */
} Owner_82D8E9D0;

static __forceinline int Max2(int a, int b)
{
    return a > b ? a : b;
}

Entry_82D8E9D0 *fn_82D8E9D0(Owner_82D8E9D0 *self, Array_82D8E9D0 *entries, int offset,
                            Entry_82D8E9D0 *exclude)
{
    int i;
    int first;
    int last;
    Entry_82D8E9D0 *entry;
    Entry_82D8E9D0 **slot;

    if (offset < self->limit && self->enabled != 0) {
        first = Max2(0, entries->size - 20);
        i = entries->size - 1;
        if (i >= first) {
            slot = &entries->data[i];
            do {
                entry = *slot;
                if (exclude != entry) {
                    last = entry->end > entry->start ? entry->end : entry->start;
                    if (entry->kind != 0 && last + offset < self->limit) {
                        entry->state = 1;
                        return entry;
                    }
                }
                i--;
                slot--;
            } while (i >= first);
        }
    }
    return 0;
}
