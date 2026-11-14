typedef struct Link_82B4C2F8 {
    unsigned int next;      /* 0x0: tagged pointer, bit 0 = end */
    unsigned int flags;     /* 0x4 */
} Link_82B4C2F8;

typedef struct Item_82B4C2F8 {
    int pad;
    unsigned int next;      /* 0x4: its link starts here */
    void *data;             /* 0x8 */
} Item_82B4C2F8;

typedef struct Iter_82B4C2F8 {
    Link_82B4C2F8 *link;    /* 0x0 */
    Item_82B4C2F8 *item;    /* 0x4 */
    void *data;             /* 0x8 */
} Iter_82B4C2F8;

void fn_82B4C2F8(Iter_82B4C2F8 *it)
{
    it->item = (it->link->flags & 1) ? 0 : (Item_82B4C2F8 *)((it->link->next & ~1u) - 4);
    it->data = it->item ? it->item->data : 0;
}
