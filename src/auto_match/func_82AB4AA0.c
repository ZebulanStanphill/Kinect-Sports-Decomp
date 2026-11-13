extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB4AA0 {
    void *data;
    struct ListItem_82AB4AA0 *pPrev;
    struct ListItem_82AB4AA0 *pNext;
} ListItem_82AB4AA0;

void fn_82AB4AA0(ListItem_82AB4AA0 *pPrevItem, ListItem_82AB4AA0 *pNewItem)
{
    if (pNewItem) {
        LL_ASSERT(pPrevItem, 0x73);
        LL_ASSERT(pPrevItem->pNext, 0x74);
        LL_ASSERT(pNewItem->pNext == SSM_NULL, 0x77);
        LL_ASSERT(pNewItem->pPrev == SSM_NULL, 0x78);
        pNewItem->pPrev = pPrevItem;
        pNewItem->pNext = pPrevItem->pNext;
        pPrevItem->pNext->pPrev = pNewItem;
        pPrevItem->pNext = pNewItem;
    }
}
