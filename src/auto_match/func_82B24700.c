typedef struct Link_82B24700 {
    unsigned int next;      /* 0x0: tagged pointer, bit 0 = end */
    unsigned int flags;     /* 0x4 */
} Link_82B24700;

typedef struct Item_82B24700 {
    int pad;
    unsigned int next;      /* 0x4 */
    void *data;             /* 0x8 */
} Item_82B24700;

typedef struct Iter_82B24700 {
    Link_82B24700 *link;    /* 0x0 */
    Item_82B24700 *item;    /* 0x4 */
    void *data;             /* 0x8 */
} Iter_82B24700;

void fn_82B24700(Iter_82B24700 *it, Link_82B24700 *link)
{
    it->link = link;
    it->item = (Item_82B24700 *)((link->flags & 1) ? 0 : link->flags);
    it->data = 0;
    it->item = (it->link->flags & 1) ? 0 : (Item_82B24700 *)((it->link->next & ~1u) - 4);
    if (it->item)
        it->data = it->item->data;
    else
        it->data = 0;
}
