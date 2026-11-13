extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

typedef struct ListNode_82AB4F50 {
    void *data;
    struct ListNode_82AB4F50 *next;
    struct ListNode_82AB4F50 *prev;
    void *unkC;
    void *unk10;
} ListNode_82AB4F50;

typedef struct UList_82AB4F50 {
    void *pMemMgr;
    void *ctx;
    void *AllocateSysMem;
    void *FreeSysMem;
    ListNode_82AB4F50 *pSentinel;
    unsigned int size;
    ListNode_82AB4F50 *cur;
} UList_82AB4F50;

extern ListNode_82AB4F50 *fn_82AB4A28(void *pMemMgr);
extern void fn_82AB4B88(ListNode_82AB4F50 *pItem, ListNode_82AB4F50 *pNewItem);

void fn_82AB4F50(UList_82AB4F50 *pUList, void *a, void *b)
{
    ListNode_82AB4F50 *pNewItem;

    LL_ASSERT(pUList, 0x23a);
    pNewItem = fn_82AB4A28(pUList->pMemMgr);
    LL_ASSERT(pNewItem, 0x23f);
    pNewItem->unkC = a;
    pNewItem->unk10 = b;
    fn_82AB4B88(pUList->pSentinel, pNewItem);
    if (pUList->size == 0)
        pUList->pSentinel->prev = pNewItem;
    pUList->size++;
}
