/* std::_Insertion_sort1 over 0x5c-byte entries (VC10 <algorithm>). */
typedef struct Entry_8243FDE0 {
    int id;
    int pad[17];
    int key;
    int valid;
    int rest[3];
} Entry_8243FDE0;
static __forceinline unsigned char Less(const Entry_8243FDE0 *a, const Entry_8243FDE0 *b)
{
    if (a->valid != 1)
        return 0;
    if (b->valid != 1)
        return 1;
    return a->key < b->key || (a->key == b->key && a->id < b->id);
}

void fn_8243FDE0(Entry_8243FDE0 *first, Entry_8243FDE0 *last)
{
    Entry_8243FDE0 *next;
    for (next = first; ++next != last; ) {
        Entry_8243FDE0 *next1 = next;
        Entry_8243FDE0 val = *next;
        if (Less(&val, first)) {
            Entry_8243FDE0 *dest = ++next1;
            Entry_8243FDE0 *src = next;
            while (first != src) {
                *--dest = *--src;
            }
            *first = val;
        } else {
            Entry_8243FDE0 *first1;
            for (first1 = next1; Less(&val, --first1); next1 = first1) {
                *next1 = *first1;
            }
            *next1 = val;
        }
    }
}
