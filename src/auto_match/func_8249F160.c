/* Insertion sort over 12-byte elements ordered by their leading float. */
typedef struct Elem_8249F160 {
    float key;
    int a;
    int extra;
} Elem_8249F160;

static __forceinline unsigned char Less(const Elem_8249F160 *a, const Elem_8249F160 *b)
{
    return a->key < b->key;
}

void fn_8249F160(Elem_8249F160 *first, Elem_8249F160 *last)
{
    Elem_8249F160 *next;
    if (first != last) {
        for (next = first; ++next != last;) {
            Elem_8249F160 *next1 = next;
            Elem_8249F160 val = *next;
            if (Less(&val, first)) {
                Elem_8249F160 *dest = ++next1;
                Elem_8249F160 *src = next;
                while (first != src) {
                    *--dest = *--src;
                }
                *first = val;
            } else {
                Elem_8249F160 *first1;
                for (first1 = next1; Less(&val, --first1); next1 = first1) {
                    *next1 = *first1;
                }
                *next1 = val;
            }
        }
    }
}
