/* std::_Insertion_sort1 over 8-byte elements ordered by their second word (VC10 <algorithm>). */
typedef struct Elem_822755F8 {
    int a;
    int key;
} Elem_822755F8;

static __forceinline unsigned char Less(const Elem_822755F8 *a, const Elem_822755F8 *b)
{
    return a->key < b->key;
}

void fn_822755F8(Elem_822755F8 *first, Elem_822755F8 *last)
{
    Elem_822755F8 *next;
    if (first != last) {
        for (next = first; ++next != last; ) {
            Elem_822755F8 *next1 = next;
            Elem_822755F8 val = *next;
            if (Less(&val, first)) {
                Elem_822755F8 *dest = ++next1;
                Elem_822755F8 *src = next;
                while (first != src) {
                    *--dest = *--src;
                }
                *first = val;
            } else {
                Elem_822755F8 *first1;
                for (first1 = next1; Less(&val, --first1); next1 = first1) {
                    *next1 = *first1;
                }
                *next1 = val;
            }
        }
    }
}
