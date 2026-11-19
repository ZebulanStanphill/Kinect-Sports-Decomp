typedef struct Entry_82510BE8 {
    unsigned int key; /* 0x0 */
    int value4;       /* 0x4 */
    int value8;       /* 0x8 */
    int valueC;       /* 0xc */
} Entry_82510BE8;

static __forceinline void Swap_82510BE8(Entry_82510BE8 *left, Entry_82510BE8 *right)
{
    Entry_82510BE8 temp = *left;

    *left = *right;
    *right = temp;
}

void fn_82510BE8(Entry_82510BE8 *first, Entry_82510BE8 *mid, Entry_82510BE8 *last)
{
    if (mid->key < first->key) {
        Swap_82510BE8(mid, first);
    }
    if (last->key < mid->key) {
        Swap_82510BE8(last, mid);
    }
    if (mid->key < first->key) {
        Swap_82510BE8(mid, first);
    }
}
