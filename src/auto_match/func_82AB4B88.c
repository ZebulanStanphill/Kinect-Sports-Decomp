extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB4B88 {
    void *data;
    struct ListItem_82AB4B88 *pPrev;
    struct ListItem_82AB4B88 *pNext;
} ListItem_82AB4B88;

void fn_82AB4B88(ListItem_82AB4B88 *pNextItem, ListItem_82AB4B88 *pNewItem)
{
    if (pNewItem) {
        LL_ASSERT(pNextItem, 0xa3);
        LL_ASSERT(pNextItem->pPrev, 0xa4);
        LL_ASSERT(pNewItem->pNext == SSM_NULL, 0xa7);
        LL_ASSERT(pNewItem->pPrev == SSM_NULL, 0xa8);
        pNewItem->pNext = pNextItem;
        pNewItem->pPrev = pNextItem->pPrev;
        pNewItem->pPrev->pNext = pNewItem;
        pNextItem->pPrev = pNewItem;
    }
}
