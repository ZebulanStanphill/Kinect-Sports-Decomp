typedef struct {
    int v[5];
} Entry_8250C138;

extern unsigned char fn_8250A688(const Entry_8250C138 *a, const Entry_8250C138 *b);

/* Move `value` up from `hole` towards `top` while its parent orders before it. */
static __forceinline void PushHeap(Entry_8250C138 *first, int hole, int top, const Entry_8250C138 *value)
{
    int parent;

    for (parent = (hole - 1) / 2; top < hole && fn_8250A688(&first[parent], value); parent = (hole - 1) / 2) {
        first[hole] = first[parent];
        hole = parent;
    }
    first[hole] = *value;
}

/* Heap sift: move the hole at `hole` down to the bottom along the larger children,
   then push `value` back up from there. */
void fn_8250C138(Entry_8250C138 *first, int hole, int bottom, const Entry_8250C138 *value)
{
    int top = hole;
    int child;

    for (child = 2 * hole + 2; child < bottom; child = 2 * child + 2) {
        if (fn_8250A688(&first[child], &first[child - 1]))
            child--;
        first[hole] = first[child];
        hole = child;
    }
    if (child == bottom) {
        first[hole] = first[bottom - 1];
        hole = bottom - 1;
    }
    PushHeap(first, hole, top, value);
}
