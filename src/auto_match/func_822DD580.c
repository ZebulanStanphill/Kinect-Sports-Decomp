/* Moves the hole up towards top while the parent is less than value, then stores value. */
static __forceinline void PushHeap(char *begin, int hole, int top, const char *value)
{
    int index;

    for (index = (hole - 1) / 2; top < hole && begin[index] < *value; index = (index - 1) / 2) {
        begin[hole] = begin[index];
        hole = index;
    }
    begin[hole] = *value;
}

/* Heap adjust: moves the hole down to the bottom along the larger children, then pushes value up. */
void fn_822DD580(char *begin, int hole, int count, const char *value)
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
