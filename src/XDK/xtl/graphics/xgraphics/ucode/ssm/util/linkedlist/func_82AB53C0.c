extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB53C0 {
    void *pMemMgr;
    struct ListItem_82AB53C0 *pPrev;
    struct ListItem_82AB53C0 *pNext;
    unsigned int key;
    void *pObj;
} ListItem_82AB53C0;

typedef struct OList_82AB53C0 {
    void *pMemMgr;
    void *pContext;
    void *unk8;
    void (*pfnFree)(void *pContext, void *p);
    ListItem_82AB53C0 *pSentinel;
    unsigned int size;
    ListItem_82AB53C0 *pCurrent;
    unsigned int external;
} OList_82AB53C0;

extern ListItem_82AB53C0 *fn_82AB4C70(ListItem_82AB53C0 *pItem);
extern void fn_82B6B230(void *pMemMgr, void *p);
extern void fn_82B6B0C8(void *pMemMgr);

static __forceinline void FreeItem(ListItem_82AB53C0 *pItem)
{
    if (pItem)
        fn_82B6B230(pItem->pMemMgr, pItem);
}

static __forceinline ListItem_82AB53C0 *Next(ListItem_82AB53C0 *pItem)
{
    return !pItem ? SSM_NULL : pItem->pNext;
}

void fn_82AB53C0(OList_82AB53C0 *pOList)
{
    ListItem_82AB53C0 *pCurrItem;
    ListItem_82AB53C0 *pItem;

    LL_ASSERT(pOList, 0x434);
    pCurrItem = Next(pOList->pSentinel);
    while (pCurrItem != pOList->pSentinel) {
        pItem = pCurrItem;
        pCurrItem = Next(pCurrItem);
        LL_ASSERT(pCurrItem, 0x440);
        pItem = fn_82AB4C70(pItem);
        pOList->pfnFree(pOList->pContext, pItem->pObj);
        fn_82B6B230(pItem->pMemMgr, pItem);
    }
    FreeItem(pOList->pSentinel);
    if (!pOList->external) {
        fn_82B6B0C8(pOList->pMemMgr);
        pOList->pfnFree(pOList->pContext, pOList);
    }
}
