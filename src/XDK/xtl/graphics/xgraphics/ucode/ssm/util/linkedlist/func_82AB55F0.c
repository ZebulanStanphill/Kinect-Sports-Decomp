extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

typedef struct ListItem_82AB55F0 {
    void *unk0;
    void *unk4;
    struct ListItem_82AB55F0 *pNext;
    void *pData;
} ListItem_82AB55F0;

ListItem_82AB55F0 *fn_82AB55F0(ListItem_82AB55F0 *pStartItem, ListItem_82AB55F0 *pEndItem, void *pData)
{
    ListItem_82AB55F0 *pSearchItem = pStartItem;

    LL_ASSERT(pStartItem, 0x4bc);
    LL_ASSERT(pEndItem, 0x4bd);
    while (pSearchItem != pEndItem) {
        if (pSearchItem->pData == pData)
            goto found;
        pSearchItem = pSearchItem->pNext;
        LL_ASSERT(pSearchItem, 0x4cb);
    }
    pSearchItem = 0;
found:
    return pSearchItem;
}
