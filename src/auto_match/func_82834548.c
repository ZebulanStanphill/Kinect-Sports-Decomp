/* std::_Insertion_sort1 over 8-byte elements ordered by their second word (VC10 <algorithm>). */
typedef struct Elem_82834548 {
    int a;
    unsigned int key;
    int extra;
} Elem_82834548;

static __forceinline unsigned char Less(const Elem_82834548 *a, const Elem_82834548 *b)
{
    return a->key < b->key;
}

void fn_82834548(Elem_82834548 *first, Elem_82834548 *last)
{
    Elem_82834548 *next;
    if (first != last) {
        for (next = first; ++next != last;) {
            Elem_82834548 *next1 = next;
            Elem_82834548 val = *next;
            if (Less(&val, first)) {
                Elem_82834548 *dest = ++next1;
                Elem_82834548 *src = next;
                while (first != src) {
                    *--dest = *--src;
                }
                *first = val;
            } else {
                Elem_82834548 *first1;
                for (first1 = next1; Less(&val, --first1); next1 = first1) {
                    *next1 = *first1;
                }
                *next1 = val;
            }
        }
    }
}
