typedef struct Element_825520B8 {
    unsigned int value; /* 0x0 */
    int priority;       /* 0x4 */
} Element_825520B8;

/* Moves the hole up towards top while the parent compares less than value, then stores value. */
static __forceinline void PushHeap(Element_825520B8 *begin, int hole, int top, const Element_825520B8 *value)
{
    int index;

    for (index = (hole - 1) / 2; top < hole && begin[index].priority < value->priority;
         index = (index - 1) / 2) {
        begin[hole] = begin[index];
        hole = index;
    }
    begin[hole] = *value;
}

/* Heap adjust: moves the hole down to the bottom along the larger children, then pushes value up. */
void fn_825520B8(Element_825520B8 *begin, int hole, int count, const Element_825520B8 *value)
{
    int top = hole;
    int child = 2 * hole + 2;

    for (; child < count; child = 2 * child + 2) {
        if (begin[child].priority < begin[child - 1].priority) {
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
