/* std::_Adjust_heap over 0xdc-byte elements with a by-value predicate (VC10 <algorithm>), with
   std::_Push_heap inlined. Exact only when compiled together with the predicate (link-time code
   generation): the copy of the predicate for the push loop then comes from the register it arrived in. */
typedef struct Elem_8227D380 {
    unsigned char bytes[0xdc];
} Elem_8227D380;

typedef struct Pred_8227D380 {
    int state;
} Pred_8227D380;

extern unsigned char fn_8227C270(Pred_8227D380 *pred, const Elem_8227D380 *a, const Elem_8227D380 *b);

static __forceinline void PushHeap(Elem_8227D380 *first, int hole, int top, const Elem_8227D380 *value,
                                   Pred_8227D380 pred)
{
    int index;

    for (index = (hole - 1) / 2; top < hole && fn_8227C270(&pred, &first[index], value);
         index = (hole - 1) / 2) {
        first[hole] = first[index];
        hole = index;
    }
    first[hole] = *value;
}

void fn_8227D380(Elem_8227D380 *first, int hole, int bottom, const Elem_8227D380 *value, Pred_8227D380 pred)
{
    int top = hole;
    int index = 2 * hole + 2;

    for (; index < bottom; index = 2 * index + 2) {
        if (fn_8227C270(&pred, &first[index], &first[index - 1])) {
            --index;
        }
        first[hole] = first[index];
        hole = index;
    }
    if (index == bottom) {
        first[hole] = first[bottom - 1];
        hole = bottom - 1;
    }
    PushHeap(first, hole, top, value, pred);
}
