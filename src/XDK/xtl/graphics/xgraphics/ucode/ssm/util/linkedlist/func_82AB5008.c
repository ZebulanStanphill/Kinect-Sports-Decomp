extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

typedef struct ListItem_82AB5008 {
    void *unk0;
    void *unk4;
    struct ListItem_82AB5008 *pNext;
    void *pData;
} ListItem_82AB5008;

ListItem_82AB5008 *fn_82AB5008(ListItem_82AB5008 *pStartItem, ListItem_82AB5008 *pEndItem, void *pData)
{
    ListItem_82AB5008 *pSearchItem = pStartItem;

    LL_ASSERT(pStartItem, 0x26d);
    LL_ASSERT(pEndItem, 0x26e);
    while (pSearchItem != pEndItem) {
        if (pSearchItem->pData == pData)
            goto found;
        pSearchItem = pSearchItem->pNext;
        LL_ASSERT(pSearchItem, 0x27c);
    }
    pSearchItem = 0;
found:
    return pSearchItem;
}
