typedef struct Element_82510D60 {
    unsigned int key;    /* 0x0 */
    unsigned int second; /* 0x4 */
    unsigned int third;  /* 0x8 */
    unsigned int fourth; /* 0xc */
} Element_82510D60;

/* Moves the hole up towards top while the parent's key is less than value's, then stores value. */
static __forceinline void PushHeap(Element_82510D60 *begin, int hole, int top, const Element_82510D60 *value)
{
    int index;

    for (index = (hole - 1) / 2; top < hole && begin[index].key < value->key; index = (index - 1) / 2) {
        begin[hole] = begin[index];
        hole = index;
    }
    begin[hole] = *value;
}

/* Heap adjust: moves the hole down to the bottom along the larger children, then pushes value up. */
void fn_82510D60(Element_82510D60 *begin, int hole, int count, const Element_82510D60 *value)
{
    int top = hole;
    int child = 2 * hole + 2;

    for (; child < count; child = 2 * child + 2) {
        if (begin[child].key < begin[child - 1].key) {
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
