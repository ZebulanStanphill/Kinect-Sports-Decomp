typedef struct Element_823DA900 {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Element_823DA900;

typedef unsigned char (*Less_823DA900)(const Element_823DA900 *left, const Element_823DA900 *right);

/* Moves the hole up towards top while the parent compares less than value, then stores value. */
static __forceinline void PushHeap(Element_823DA900 *begin, int hole, int top, const Element_823DA900 *value,
                                   Less_823DA900 less)
{
    int index;

    for (index = (hole - 1) / 2; top < hole && less(begin + index, value); index = (index - 1) / 2) {
        begin[hole] = begin[index];
        hole = index;
    }
    begin[hole] = *value;
}

/* Heap adjust: moves the hole down to the bottom along the larger children, then pushes value up. */
void fn_823DA900(Element_823DA900 *begin, int hole, int count, const Element_823DA900 *value,
                 Less_823DA900 less)
{
    int top = hole;
    int child = 2 * hole + 2;

    for (; child < count; child = 2 * child + 2) {
        if (less(begin + child, begin + (child - 1))) {
            --child;
        }
        begin[hole] = begin[child];
        hole = child;
    }
    if (child == count) {
        begin[hole] = begin[count - 1];
        hole = count - 1;
    }
    PushHeap(begin, hole, top, value, less);
}
