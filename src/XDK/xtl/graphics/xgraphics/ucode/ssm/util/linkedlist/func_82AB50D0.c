extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB50D0 {
    void *data;
    struct ListItem_82AB50D0 *pPrev;
    struct ListItem_82AB50D0 *pNext;
    void *unkC;
    void *pObj;
} ListItem_82AB50D0;

typedef struct UList_82AB50D0 {
    void *pMemMgr;
    void *unk4;
    void *unk8;
    void *unkC;
    ListItem_82AB50D0 *pSentinel;
    unsigned int size;
    ListItem_82AB50D0 *pCurrent;
    unsigned int valid;
} UList_82AB50D0;

extern ListItem_82AB50D0 *fn_82AB5008(ListItem_82AB50D0 *pHead, ListItem_82AB50D0 *pSentinel, void *key);

void *fn_82AB50D0(UList_82AB50D0 *pUList, void *key)
{
    ListItem_82AB50D0 *pHead;
    ListItem_82AB50D0 *pItem;

    LL_ASSERT(pUList, 0x2a0);
    pHead = !pUList->pSentinel ? SSM_NULL : pUList->pSentinel->pNext;
    LL_ASSERT(pHead, 0x2a5);
    pItem = fn_82AB5008(pHead, pUList->pSentinel, key);
    if (!pItem)
        pItem = pUList->pSentinel;
    pUList->pCurrent = pItem;
    return pItem->pObj;
}
