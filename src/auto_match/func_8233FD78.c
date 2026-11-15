/* Insertion sort over 8-byte elements ordered by their leading float. */
typedef struct Elem_8233FD78 {
    float key; /* 0x0 */
    int value; /* 0x4 */
} Elem_8233FD78;

static __forceinline unsigned char Greater(const Elem_8233FD78 *a, const Elem_8233FD78 *b)
{
    return a->key > b->key;
}

void fn_8233FD78(Elem_8233FD78 *first, Elem_8233FD78 *last)
{
    Elem_8233FD78 *next;
    if (first != last) {
        for (next = first; ++next != last;) {
            Elem_8233FD78 *next1 = next;
            Elem_8233FD78 val;
            val.key = next->key;
            val.value = next->value;
            if (Greater(&val, first)) {
                Elem_8233FD78 *dest = ++next1;
                Elem_8233FD78 *src = next;
                while (first != src) {
                    --dest;
                    --src;
                    dest->key = src->key;
                    dest->value = src->value;
                }
                first->key = val.key;
                first->value = val.value;
            } else {
                Elem_8233FD78 *first1;
                for (first1 = next1; Greater(&val, --first1); next1 = first1) {
                    next1->key = first1->key;
                    next1->value = first1->value;
                }
                next1->key = val.key;
                next1->value = val.value;
            }
        }
    }
}
