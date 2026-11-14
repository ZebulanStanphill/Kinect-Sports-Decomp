typedef struct Elem_82510AC8 {
    unsigned int key, b, c, d;
} Elem_82510AC8;

void fn_82510AC8(Elem_82510AC8 *first, Elem_82510AC8 *last)
{
    Elem_82510AC8 *next;
    if (first != last)
        for (next = first; ++next != last;) {
            Elem_82510AC8 *next1 = next;
            Elem_82510AC8 val = *next;
            if (val.key < first->key) {
                Elem_82510AC8 *dest = ++next1, *src = next;
                while (first != src)
                    *--dest = *--src;
                *first = val;
            } else {
                Elem_82510AC8 *first1;
                for (first1 = next1; val.key < (--first1)->key; next1 = first1)
                    *next1 = *first1;
                *next1 = val;
            }
        }
}
