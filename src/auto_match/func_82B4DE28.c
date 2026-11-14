typedef struct Link_82B4DE28 {
    unsigned int next;      /* 0x0: tagged pointer, bit 0 = end */
    unsigned int flags;     /* 0x4 */
} Link_82B4DE28;

typedef struct Item_82B4DE28 {
    int pad;
    unsigned int next;      /* 0x4: its link starts here */
    void *data;             /* 0x8 */
} Item_82B4DE28;

typedef struct Iter_82B4DE28 {
    Link_82B4DE28 *link;    /* 0x0 */
    Item_82B4DE28 *item;    /* 0x4 */
    void *data;             /* 0x8 */
} Iter_82B4DE28;

extern void fn_82B4B1D8(Iter_82B4DE28 *it, unsigned int n);

void fn_82B4DE28(Iter_82B4DE28 *it, unsigned int n)
{
    it->item = (it->link->flags & 1) ? 0 : (Item_82B4DE28 *)((it->link->next & ~1u) - 4);
    it->data = it->item ? it->item->data : 0;
    fn_82B4B1D8(it, n);
}
