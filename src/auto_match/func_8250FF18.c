typedef struct Element_8250FF18 {
    unsigned __int64 first;  /* 0x00 */
    unsigned __int64 second; /* 0x08 */
    float key;               /* 0x10 */
    unsigned int pad14;
    unsigned __int64 fourth; /* 0x18 */
} Element_8250FF18;

/* Moves the hole up towards top while the parent's key is less than value's, then stores value. */
static __forceinline void PushHeap(Element_8250FF18 *begin, int hole, int top, const Element_8250FF18 *value)
{
    int index;

    for (index = (hole - 1) / 2; top < hole && begin[index].key < value->key; index = (index - 1) / 2) {
        begin[hole] = begin[index];
        hole = index;
    }
    begin[hole] = *value;
}

/* Heap adjust: moves the hole down to the bottom along the larger children, then pushes value up. */
void fn_8250FF18(Element_8250FF18 *begin, int hole, int count, const Element_8250FF18 *value)
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
