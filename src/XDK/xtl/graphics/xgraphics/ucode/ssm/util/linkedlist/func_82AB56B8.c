extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB56B8 {
    void *data;
    struct ListItem_82AB56B8 *pPrev;
    struct ListItem_82AB56B8 *pNext;
    void *unkC;
    void *pObj;
} ListItem_82AB56B8;

typedef struct OList_82AB56B8 {
    void *pMemMgr;
    void *unk4;
    void *unk8;
    void *unkC;
    ListItem_82AB56B8 *pSentinel;
    unsigned int size;
    ListItem_82AB56B8 *pCurrent;
    unsigned int valid;
} OList_82AB56B8;

extern ListItem_82AB56B8 *fn_82AB55F0(ListItem_82AB56B8 *pHead, ListItem_82AB56B8 *pSentinel, void *key);

void *fn_82AB56B8(OList_82AB56B8 *pOList, void *key)
{
    ListItem_82AB56B8 *pHead;
    ListItem_82AB56B8 *pItem;

    LL_ASSERT(pOList, 0x4ee);
    pHead = !pOList->pSentinel ? SSM_NULL : pOList->pSentinel->pNext;
    LL_ASSERT(pHead, 0x4f3);
    pItem = fn_82AB55F0(pHead, pOList->pSentinel, key);
    if (!pItem)
        pItem = pOList->pSentinel;
    pOList->pCurrent = pItem;
    return pItem->pObj;
}
