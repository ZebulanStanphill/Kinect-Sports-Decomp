/* std::_Insertion_sort1 over 20-byte entries ordered by the float at +8 (VC10 <algorithm>). */
typedef struct {
    int a;
    int b;
    float key;      /* 0x08 */
    int c;
    int d;
} Entry_8250B670;

static __forceinline unsigned char Less(const Entry_8250B670 *a, const Entry_8250B670 *b)
{
    return a->key < b->key;
}

void fn_8250B670(Entry_8250B670 *first, Entry_8250B670 *last)
{
    Entry_8250B670 *next;
    if (first != last) {
        for (next = first; ++next != last; ) {
            Entry_8250B670 *next1 = next;
            Entry_8250B670 val = *next;
            if (Less(&val, first)) {
                Entry_8250B670 *dest = ++next1;
                Entry_8250B670 *src = next;
                while (first != src) {
                    *--dest = *--src;
                }
                *first = val;
            } else {
                Entry_8250B670 *first1;
                for (first1 = next1; Less(&val, --first1); next1 = first1) {
                    *next1 = *first1;
                }
                *next1 = val;
            }
        }
    }
}
