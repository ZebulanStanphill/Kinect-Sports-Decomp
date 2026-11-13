extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

typedef void *(*AllocFn_82AB4D18)(void *ctx, unsigned int size);
typedef void (*FreeFn_82AB4D18)(void *ctx, void *p);

typedef struct ListNode_82AB4D18 {
    void *data;
    struct ListNode_82AB4D18 *next;
    struct ListNode_82AB4D18 *prev;
    void *unkC;
    void *unk10;
} ListNode_82AB4D18;

typedef struct List_82AB4D18 {
    void *pMemMgr;
    void *ctx;
    AllocFn_82AB4D18 AllocateSysMem;
    FreeFn_82AB4D18 FreeSysMem;
    ListNode_82AB4D18 *pSentinel;
    unsigned int size;
    ListNode_82AB4D18 *cur;
} List_82AB4D18;

extern void *fn_82B6B008(void *heap, unsigned int size, AllocFn_82AB4D18 alloc, FreeFn_82AB4D18 free, void *ctx);
extern ListNode_82AB4D18 *fn_82AB4A28(void *pMemMgr);

List_82AB4D18 *fn_82AB4D18(void *ctx, AllocFn_82AB4D18 AllocateSysMem, FreeFn_82AB4D18 FreeSysMem, void *heap)
{
    List_82AB4D18 *pNewList;

    LL_ASSERT(AllocateSysMem, 0x1c1);
    LL_ASSERT(FreeSysMem, 0x1c2);
    pNewList = (List_82AB4D18 *)AllocateSysMem(ctx, 0x20);
    LL_ASSERT(pNewList, 0x1c8);
    pNewList->ctx = ctx;
    pNewList->AllocateSysMem = AllocateSysMem;
    pNewList->FreeSysMem = FreeSysMem;
    pNewList->pMemMgr = fn_82B6B008(heap, 0x14, AllocateSysMem, FreeSysMem, ctx);
    pNewList->pSentinel = fn_82AB4A28(pNewList->pMemMgr);
    LL_ASSERT(pNewList->pSentinel, 0x1d7);
    pNewList->pSentinel->unkC = 0;
    pNewList->pSentinel->unk10 = 0;
    pNewList->pSentinel->prev = pNewList->pSentinel;
    pNewList->pSentinel->next = pNewList->pSentinel;
    pNewList->size = 0;
    pNewList->cur = pNewList->pSentinel;
    return pNewList;
}
