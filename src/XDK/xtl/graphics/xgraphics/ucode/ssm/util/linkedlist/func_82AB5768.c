extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListNode_82AB5768 {
    void *data;
    struct ListNode_82AB5768 *next;
    struct ListNode_82AB5768 *prev;
    void *unkC;
    void *unk10;
} ListNode_82AB5768;

typedef struct OList_82AB5768 {
    void *pMemMgr;
    void *unk4;
    void *unk8;
    void *unkC;
    ListNode_82AB5768 *pSentinel;
    unsigned int size;
    ListNode_82AB5768 *cur;
    unsigned int valid;
} OList_82AB5768;

extern ListNode_82AB5768 *fn_82AB55F0(ListNode_82AB5768 *pStartItem, ListNode_82AB5768 *pEnd, void *key);

void *fn_82AB5768(OList_82AB5768 *pOList)
{
    ListNode_82AB5768 *pStartItem;
    ListNode_82AB5768 *pItem;

    LL_ASSERT(pOList, 0x518);
    pStartItem = pOList->cur == SSM_NULL ? SSM_NULL : pOList->cur->prev;
    LL_ASSERT(pStartItem, 0x51e);
    pItem = fn_82AB55F0(pStartItem, pOList->pSentinel, pOList->cur->unkC);
    if (!pItem)
        pItem = pOList->pSentinel;
    pOList->cur = pItem;
    return pItem->unk10;
}
