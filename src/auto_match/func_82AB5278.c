extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

typedef struct ListNode_82AB5278 {
    void *data;
    struct ListNode_82AB5278 *next;
    struct ListNode_82AB5278 *prev;
    void *unkC;
    void *unk10;
} ListNode_82AB5278;

typedef struct OList_82AB5278 {
    void *pMemMgr;
    void *unk4;
    void *unk8;
    void *unkC;
    ListNode_82AB5278 *pSentinel;
    unsigned int size;
    ListNode_82AB5278 *cur;
    unsigned int valid;
} OList_82AB5278;

extern ListNode_82AB5278 *fn_82AB4A28(void *pMemMgr);

void fn_82AB5278(OList_82AB5278 *pOList, void *pMemMgr, void *a, void *b, void *c)
{
    LL_ASSERT(pOList, 0x3f2);
    LL_ASSERT(pMemMgr, 0x3f3);
    LL_ASSERT(!pOList->pSentinel, 0x3f6);
    LL_ASSERT(pOList->size == 0, 0x3f7);
    pOList->unk4 = a;
    pOList->unk8 = b;
    pOList->unkC = c;
    pOList->pMemMgr = pMemMgr;
    pOList->pSentinel = fn_82AB4A28(pMemMgr);
    LL_ASSERT(pOList->pSentinel, 0x407);
    pOList->pSentinel->unkC = 0;
    pOList->pSentinel->unk10 = 0;
    pOList->pSentinel->prev = pOList->pSentinel;
    pOList->pSentinel->next = pOList->pSentinel;
    pOList->size = 0;
    pOList->cur = pOList->pSentinel;
    pOList->valid = 1;
}
