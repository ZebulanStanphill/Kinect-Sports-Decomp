typedef struct Element_8248F390 {
    unsigned int first;
    unsigned int second;
} Element_8248F390;

/* The compared copies of two elements; both loops use the same two stack slots. */
typedef struct Temps_8248F390 {
    Element_8248F390 right; /* 0x0 */
    Element_8248F390 left;  /* 0x8 */
} Temps_8248F390;

extern Element_8248F390 *fn_82365BD8(Element_8248F390 *out, const Element_8248F390 *source);
extern unsigned char fn_8248E2C0(const Element_8248F390 *first, const Element_8248F390 *second);
extern void fn_823F2E20(Element_8248F390 *out, const Element_8248F390 *source);

/* Moves the hole up towards top while value compares greater than the parent, then stores value. */
static __forceinline void PushHeap(Element_8248F390 *begin, int hole, int top, const Element_8248F390 *value,
                                   Temps_8248F390 *temporary)
{
    int index;

    for (index = (hole - 1) / 2; top < hole && fn_8248E2C0(fn_82365BD8(&temporary->right, begin + index),
                                                           fn_82365BD8(&temporary->left, value));
         index = (index - 1) / 2) {
        fn_823F2E20(begin + hole, begin + index);
        hole = index;
    }
    fn_823F2E20(begin + hole, value);
}

/* Heap adjust: moves the hole down to the bottom along the larger children, then pushes value up. */
void fn_8248F390(Element_8248F390 *begin, int hole, int count, const Element_8248F390 *value)
{
    int top = hole;
    int child = 2 * hole + 2;
    Temps_8248F390 temporary;

    for (; child < count; child = 2 * child + 2) {
        if (fn_8248E2C0(fn_82365BD8(&temporary.left, begin + child),
                        fn_82365BD8(&temporary.right, begin + (child - 1))) != 0) {
            --child;
        }
        fn_823F2E20(begin + hole, begin + child);
        hole = child;
    }
    if (child == count) {
        fn_823F2E20(begin + hole, begin + (count - 1));
        hole = count - 1;
    }
    PushHeap(begin, hole, top, value, &temporary);
}
