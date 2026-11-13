extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB5C40 {
    void *pMemMgr;
    struct ListItem_82AB5C40 *pPrev;
    struct ListItem_82AB5C40 *pNext;
    void *pObj;
} ListItem_82AB5C40;

typedef struct IntList_82AB5C40 {
    void *pMemMgr;
    void *pContext;
    void *unk8;
    void (*pfnFree)(void *pContext, void *p);
    ListItem_82AB5C40 *pSentinel;
    unsigned int size;
    unsigned int external;
} IntList_82AB5C40;

extern ListItem_82AB5C40 *fn_82AB4C70(ListItem_82AB5C40 *pItem);
extern void fn_82B6B230(void *pMemMgr, void *p);
extern void fn_82B6B0C8(void *pMemMgr);

static __forceinline void FreeItem(ListItem_82AB5C40 *pItem)
{
    if (pItem)
        fn_82B6B230(pItem->pMemMgr, pItem);
}

static __forceinline ListItem_82AB5C40 *Next(ListItem_82AB5C40 *pItem)
{
    return !pItem ? SSM_NULL : pItem->pNext;
}

void fn_82AB5C40(IntList_82AB5C40 *pIntList)
{
    ListItem_82AB5C40 *pCurrItem;
    ListItem_82AB5C40 *pItem;
    ListItem_82AB5C40 *pTempItem;

    LL_ASSERT(pIntList, 0x8e7);
    pCurrItem = Next(pIntList->pSentinel);
    LL_ASSERT(pCurrItem, 0x8ec);
    while (pCurrItem != pIntList->pSentinel) {
        pItem = pCurrItem;
        pCurrItem = Next(pCurrItem);
        LL_ASSERT(pCurrItem, 0x8f5);
        pTempItem = fn_82AB4C70(pItem);
        LL_ASSERT(pTempItem, 0x8f9);
        FreeItem(pTempItem);
    }
    FreeItem(pIntList->pSentinel);
    if (!pIntList->external) {
        fn_82B6B0C8(pIntList->pMemMgr);
        pIntList->pfnFree(pIntList->pContext, pIntList);
    }
}
