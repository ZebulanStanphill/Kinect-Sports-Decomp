/* std::_Insertion_sort1 over 12-byte elements with a function-pointer predicate
   (VC10 <algorithm>; the outer first != last test is not in this instance). */
typedef struct Elem_823DA6E0 {
    int a;
    int b;
    int c;
} Elem_823DA6E0;

typedef unsigned char (*Pred_823DA6E0)(const Elem_823DA6E0 *a, const Elem_823DA6E0 *b);

void fn_823DA6E0(Elem_823DA6E0 *first, Elem_823DA6E0 *last, Pred_823DA6E0 pred)
{
    Elem_823DA6E0 *next;
    for (next = first; ++next != last; ) {
        Elem_823DA6E0 *next1 = next;
        Elem_823DA6E0 val = *next;
        if (pred(&val, first)) {
            Elem_823DA6E0 *dest = ++next1;
            Elem_823DA6E0 *src = next;
            while (first != src) {
                *--dest = *--src;
            }
            *first = val;
        } else {
            Elem_823DA6E0 *first1;
            for (first1 = next1; pred(&val, --first1); next1 = first1) {
                *next1 = *first1;
            }
            *next1 = val;
        }
    }
}
