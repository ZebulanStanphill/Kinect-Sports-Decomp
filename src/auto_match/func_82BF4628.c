typedef struct ItemList_82BF4628 {
    char pad[0x1c];
    void **items;                /* 0x1c */
    unsigned short count;        /* 0x20 */
    unsigned short visibleCount; /* 0x22 */
    unsigned int current;        /* 0x24 */
} ItemList_82BF4628;

extern int fn_82F640F0(void *dst, unsigned int dstSize, const void *src, unsigned int count);

static __forceinline unsigned int IndexOf(ItemList_82BF4628 *list, void *item)
{
    unsigned int index;
    unsigned int found = (unsigned int)-1;

    if (list->items != 0 && list->count != 0) {
        for (index = 0; index < list->count; index++) {
            if (list->items[index] == item) {
                found = index;
                break;
            }
        }
    }
    return found;
}

void fn_82BF4628(ItemList_82BF4628 *list, void *item)
{
    unsigned int index = IndexOf(list, item);
    unsigned int count;

    if (index == (unsigned int)-1) {
        return;
    }
    count = list->count;
    if (index + 1 < count) {
        fn_82F640F0(&list->items[index], (count - index) * sizeof(void *), &list->items[index + 1],
                    (count - index - 1) * sizeof(void *));
    }
    if (index < list->current) {
        list->current--;
    }
    if (list->visibleCount == list->count) {
        list->visibleCount--;
        list->current %= list->visibleCount;
    }
    list->count--;
}
