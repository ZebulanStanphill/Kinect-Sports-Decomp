extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB5910 {
    void *data;
    struct ListItem_82AB5910 *pPrev;
    struct ListItem_82AB5910 *pNext;
    void *unkC;
    void *pObj;
} ListItem_82AB5910;

typedef struct OList_82AB5910 {
    void *pMemMgr;
    void *unk4;
    void *unk8;
    void *unkC;
    ListItem_82AB5910 *pSentinel;
    unsigned int size;
    ListItem_82AB5910 *pCurrent;
    unsigned int valid;
} OList_82AB5910;

extern ListItem_82AB5910 *fn_82AB4C70(ListItem_82AB5910 *pItem);
extern void fn_82B6B230(void *pool, void *pItem);

void *fn_82AB5910(OList_82AB5910 *pOList)
{
    ListItem_82AB5910 *pHead;
    ListItem_82AB5910 *pItem;
    void *pObj;

    LL_ASSERT(pOList, 0x5cd);
    pHead = !pOList->pSentinel ? SSM_NULL : pOList->pSentinel->pNext;
    LL_ASSERT(pHead, 0x5d3);
    pObj = pHead->pObj;
    if (pHead != pOList->pSentinel) {
        pItem = fn_82AB4C70(pHead);
        if (pItem == pOList->pCurrent)
            pOList->pCurrent = pOList->pSentinel;
        if (pItem)
            fn_82B6B230(pItem->data, pItem);
        pOList->size--;
    }
    return pObj;
}
