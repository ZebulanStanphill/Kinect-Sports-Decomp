/* std::_Insertion_sort1 over 20-byte entries ordered by fn_8250A688 (VC10 <algorithm>). */
typedef struct {
    int v[5];
} Entry_8250BC10;

extern unsigned char fn_8250A688(const Entry_8250BC10 *a, const Entry_8250BC10 *b);

void fn_8250BC10(Entry_8250BC10 *first, Entry_8250BC10 *last)
{
    Entry_8250BC10 *next;
    for (next = first; ++next != last; ) {
        Entry_8250BC10 *next1 = next;
        Entry_8250BC10 val = *next;
        if (fn_8250A688(&val, first)) {
            Entry_8250BC10 *dest = ++next1;
            Entry_8250BC10 *src = next;
            while (first != src) {
                *--dest = *--src;
            }
            *first = val;
        } else {
            Entry_8250BC10 *first1;
            for (first1 = next1; fn_8250A688(&val, --first1); next1 = first1) {
                *next1 = *first1;
            }
            *next1 = val;
        }
    }
}
