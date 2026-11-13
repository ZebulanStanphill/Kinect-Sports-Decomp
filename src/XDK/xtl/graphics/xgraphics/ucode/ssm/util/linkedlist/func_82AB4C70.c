extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB4C70 {
    void *data;
    struct ListItem_82AB4C70 *pPrev;
    struct ListItem_82AB4C70 *pNext;
} ListItem_82AB4C70;

ListItem_82AB4C70 *fn_82AB4C70(ListItem_82AB4C70 *pItem)
{
    if (pItem == SSM_NULL)
        return SSM_NULL;
    LL_ASSERT(pItem->pNext, 0x108);
    LL_ASSERT(pItem->pPrev, 0x109);
    pItem->pNext->pPrev = pItem->pPrev;
    pItem->pPrev->pNext = pItem->pNext;
    pItem->pPrev = SSM_NULL;
    pItem->pNext = SSM_NULL;
    return pItem;
}
