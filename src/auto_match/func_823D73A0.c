/* std::_Insertion_sort1 over 8-byte elements with a function-pointer predicate (VC10 <algorithm>). */
typedef struct Elem_823D73A0 {
    int a;
    int b;
} Elem_823D73A0;

typedef unsigned char (*Pred_823D73A0)(const Elem_823D73A0 *a, const Elem_823D73A0 *b);

void fn_823D73A0(Elem_823D73A0 *first, Elem_823D73A0 *last, Pred_823D73A0 pred)
{
    Elem_823D73A0 *next;
    if (first != last) {
        for (next = first; ++next != last; ) {
            Elem_823D73A0 *next1 = next;
            Elem_823D73A0 val = *next;
            if (pred(&val, first)) {
                Elem_823D73A0 *dest = ++next1;
                Elem_823D73A0 *src = next;
                while (first != src) {
                    *--dest = *--src;
                }
                *first = val;
            } else {
                Elem_823D73A0 *first1;
                for (first1 = next1; pred(&val, --first1); next1 = first1) {
                    *next1 = *first1;
                }
                *next1 = val;
            }
        }
    }
}
