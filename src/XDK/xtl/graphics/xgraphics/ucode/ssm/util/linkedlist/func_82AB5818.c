extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB5818 {
    void *data;
    struct ListItem_82AB5818 *pPrev;
    struct ListItem_82AB5818 *pNext;
    void *unkC;
    void *pObj;
} ListItem_82AB5818;

typedef struct OList_82AB5818 {
    void *pMemMgr;
    void *unk4;
    void *unk8;
    void *unkC;
    ListItem_82AB5818 *pSentinel;
    unsigned int size;
    ListItem_82AB5818 *pCurrent;
    unsigned int valid;
} OList_82AB5818;

extern ListItem_82AB5818 *fn_82AB5008(ListItem_82AB5818 *pHead, ListItem_82AB5818 *pSentinel, void *key);
extern ListItem_82AB5818 *fn_82AB4C70(ListItem_82AB5818 *pItem);
extern void fn_82B6B230(void *pool, void *pItem);

void *fn_82AB5818(OList_82AB5818 *pOList, void *key)
{
    ListItem_82AB5818 *pHead;
    ListItem_82AB5818 *pItem;
    void *pObj;

    LL_ASSERT(pOList, 0x58d);
    pHead = !pOList->pSentinel ? SSM_NULL : pOList->pSentinel->pNext;
    LL_ASSERT(pHead, 0x593);
    pItem = fn_82AB5008(pHead, pOList->pSentinel, key);
    if (!pItem)
        pItem = pOList->pSentinel;
    pObj = pItem->pObj;
    if (pItem != pOList->pSentinel) {
        pItem = fn_82AB4C70(pItem);
        if (pItem == pOList->pCurrent)
            pOList->pCurrent = pOList->pSentinel;
        if (pItem)
            fn_82B6B230(pItem->data, pItem);
        pOList->size--;
    }
    return pObj;
}
