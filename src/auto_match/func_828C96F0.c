typedef unsigned __int64 Item_828C96F0;
extern void fn_828C8E40(Item_828C96F0 *, int, int, Item_828C96F0 *);
void fn_828C96F0(Item_828C96F0 *first, Item_828C96F0 *last) {
    int bytes = (char *)last - (char *)first;
    if ((bytes & ~7) > 8) {
    Item_828C96F0 *base = first - 1;
    do {
        Item_828C96F0 value = *(Item_828C96F0 *)((char *)base + bytes);
        int next = bytes - 8;
        *(Item_828C96F0 *)((char *)base + bytes) = *first;
        fn_828C8E40(first, 0, next >> 3, &value);
        bytes = next;
    } while ((bytes & ~7) > 8);
    }
}
