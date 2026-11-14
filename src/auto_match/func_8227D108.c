/* std::_Insertion_sort1 over 0xdc-byte elements with a by-value predicate (VC10 <algorithm>). */
typedef struct Elem_8227D108 {
    unsigned char bytes[0xdc];
} Elem_8227D108;

typedef struct Pred_8227D108 {
    int state;
} Pred_8227D108;

extern unsigned char fn_8227C270(Pred_8227D108 *pred, const Elem_8227D108 *a, const Elem_8227D108 *b);

void fn_8227D108(Elem_8227D108 *first, Elem_8227D108 *last, Pred_8227D108 pred)
{
    Pred_8227D108 cmp = pred;
    Elem_8227D108 *next;
    if (first != last) {
        for (next = first; ++next != last; ) {
            Elem_8227D108 *next1 = next;
            Elem_8227D108 val = *next;
            if (fn_8227C270(&cmp, &val, first)) {
                Elem_8227D108 *dest = ++next1;
                Elem_8227D108 *src = next;
                while (first != src) {
                    *--dest = *--src;
                }
                *first = val;
            } else {
                Elem_8227D108 *first1;
                for (first1 = next1; fn_8227C270(&cmp, &val, --first1); next1 = first1) {
                    *next1 = *first1;
                }
                *next1 = val;
            }
        }
    }
}
