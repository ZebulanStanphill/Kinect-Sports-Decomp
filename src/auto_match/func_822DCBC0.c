/* std::_Adjust_heap over 20-byte entries with a by-value predicate of two pointers (VC10 <algorithm>),
   with std::_Push_heap inlined. Exact only when compiled together with the predicate (link-time code
   generation): the copy of the predicate for the push loop then comes from the register it arrived in. */
typedef struct Entry_822DCBC0 {
    int words[5];
} Entry_822DCBC0;

typedef struct Predicate_822DCBC0 {
    const float *first;
    const float *second;
} Predicate_822DCBC0;

extern unsigned char fn_822D9E28(Predicate_822DCBC0 *predicate, const Entry_822DCBC0 *a,
                                 const Entry_822DCBC0 *b);

static __forceinline void PushHeap(Entry_822DCBC0 *first, int hole, int top, const Entry_822DCBC0 *value,
                                   Predicate_822DCBC0 predicate)
{
    int index;

    for (index = (hole - 1) / 2; top < hole && fn_822D9E28(&predicate, &first[index], value);
         index = (hole - 1) / 2) {
        first[hole] = first[index];
        hole = index;
    }
    first[hole] = *value;
}

void fn_822DCBC0(Entry_822DCBC0 *first, int hole, int bottom, const Entry_822DCBC0 *value,
                 Predicate_822DCBC0 predicate)
{
    int top = hole;
    int index = 2 * hole + 2;

    for (; index < bottom; index = 2 * index + 2) {
        if (fn_822D9E28(&predicate, &first[index], &first[index - 1])) {
            --index;
        }
        first[hole] = first[index];
        hole = index;
    }
    if (index == bottom) {
        first[hole] = first[bottom - 1];
        hole = bottom - 1;
    }
    PushHeap(first, hole, top, value, predicate);
}
