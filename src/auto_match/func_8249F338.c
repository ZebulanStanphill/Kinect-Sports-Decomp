typedef struct Element_8249F338 {
    float key;           /* 0x0 */
    unsigned int second; /* 0x4 */
    unsigned int third;  /* 0x8 */
} Element_8249F338;

/* Orders elements by their key. */
static __forceinline unsigned char Less(const Element_8249F338 *left, const Element_8249F338 *right)
{
    return left->key < right->key;
}

/* Moves the hole up towards top while the parent compares less than value, then stores value. */
static __forceinline void PushHeap(Element_8249F338 *begin, int hole, int top, const Element_8249F338 *value)
{
    int index;

    for (index = (hole - 1) / 2; top < hole && Less(begin + index, value); index = (index - 1) / 2) {
        begin[hole] = begin[index];
        hole = index;
    }
    begin[hole] = *value;
}

/* Heap adjust: moves the hole down to the bottom along the larger children, then pushes value up. */
void fn_8249F338(Element_8249F338 *begin, int hole, int count, const Element_8249F338 *value)
{
    int top = hole;
    int child = 2 * hole + 2;

    for (; child < count; child = 2 * child + 2) {
        if (Less(begin + child, begin + (child - 1))) {
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
