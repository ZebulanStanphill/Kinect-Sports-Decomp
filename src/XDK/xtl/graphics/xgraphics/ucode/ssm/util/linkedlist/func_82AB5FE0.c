extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB5FE0 {
    void *pMemMgr;
    struct ListItem_82AB5FE0 *pPrev;
    struct ListItem_82AB5FE0 *pNext;
    void *pObj;
} ListItem_82AB5FE0;

typedef struct ObjList_82AB5FE0 {
    void *pMemMgr;
    void *pContext;
    void *unk8;
    void (*pfnFree)(void *pContext, void *p);
    ListItem_82AB5FE0 *pSentinel;
    unsigned int size;
    unsigned int external;
} ObjList_82AB5FE0;

extern ListItem_82AB5FE0 *fn_82AB4C70(ListItem_82AB5FE0 *pItem);
extern void fn_82B6B230(void *pMemMgr, void *p);
extern void fn_82B6B0C8(void *pMemMgr);

static __forceinline void FreeItem(ListItem_82AB5FE0 *pItem)
{
    if (pItem)
        fn_82B6B230(pItem->pMemMgr, pItem);
}

static __forceinline ListItem_82AB5FE0 *Next(ListItem_82AB5FE0 *pItem)
{
    return !pItem ? SSM_NULL : pItem->pNext;
}

void fn_82AB5FE0(ObjList_82AB5FE0 *pObjList)
{
    ListItem_82AB5FE0 *pCurrItem;
    ListItem_82AB5FE0 *pItem;

    pCurrItem = Next(pObjList->pSentinel);
    LL_ASSERT(pCurrItem, 0xb94);
    while (pCurrItem != pObjList->pSentinel) {
        pItem = pCurrItem;
        pCurrItem = Next(pCurrItem);
        LL_ASSERT(pCurrItem, 0xb9d);
        pItem = fn_82AB4C70(pItem);
        pObjList->pfnFree(pObjList->pContext, pItem->pObj);
        fn_82B6B230(pItem->pMemMgr, pItem);
    }
    FreeItem(pObjList->pSentinel);
    if (!pObjList->external) {
        fn_82B6B0C8(pObjList->pMemMgr);
        pObjList->pfnFree(pObjList->pContext, pObjList);
    }
}
