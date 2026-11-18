/* Moves the hole up towards top while the parent is less than value, then stores value. */
static __forceinline void PushHeap(unsigned __int64 *begin, int hole, int top, unsigned __int64 value)
{
    int index;

    for (index = (hole - 1) / 2; top < hole && begin[index] < value; index = (index - 1) / 2) {
        begin[hole] = begin[index];
        hole = index;
    }
    begin[hole] = value;
}

/* Heap adjust: moves the hole down to the bottom along the larger children, then pushes value up. */
static __forceinline void AdjustHeap(unsigned __int64 *begin, int hole, int count, unsigned __int64 value)
{
    int top = hole;
    int child = 2 * hole + 2;

    for (; child < count; child = 2 * child + 2) {
        if (begin[child] < begin[child - 1]) {
            --child;
        }
        begin[hole] = begin[child];
        hole = child;
    }
    if (child == count) {
        begin[hole] = begin[count - 1];
        hole = count - 1;
    }
    PushHeap(begin, hole, top, value);
}

/* Make heap: adjusts every parent from the last one down to the root. */
void fn_828C9008(unsigned __int64 *begin, unsigned __int64 *end)
{
    int count = end - begin;
    int hole;

    for (hole = count / 2; 0 < hole;) {
        unsigned __int64 value;

        --hole;
        value = begin[hole];
        AdjustHeap(begin, hole, count, value);
    }
}
