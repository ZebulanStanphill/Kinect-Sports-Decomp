extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

typedef struct ListNode_82AB5EC0 {
    void *data;
    struct ListNode_82AB5EC0 *next;
    struct ListNode_82AB5EC0 *prev;
    void *unkC;
} ListNode_82AB5EC0;

typedef struct ObjList_82AB5EC0 {
    void *pMemMgr;
    unsigned int unk4[3];
    ListNode_82AB5EC0 *pSentinel;
    unsigned int size;
    unsigned int valid;
} ObjList_82AB5EC0;

extern ListNode_82AB5EC0 *fn_82AB4A28(void *pMemMgr);

void fn_82AB5EC0(ObjList_82AB5EC0 *pObjList, void *pMemMgr)
{
    LL_ASSERT(pObjList, 0xb61);
    LL_ASSERT(pMemMgr, 0xb62);
    LL_ASSERT(!pObjList->pSentinel, 0xb65);
    LL_ASSERT(pObjList->size == 0, 0xb66);
    pObjList->pMemMgr = pMemMgr;
    pObjList->pSentinel = fn_82AB4A28(pMemMgr);
    LL_ASSERT(pObjList->pSentinel, 0xb6f);
    pObjList->pSentinel->unkC = 0;
    pObjList->pSentinel->prev = pObjList->pSentinel;
    pObjList->pSentinel->next = pObjList->pSentinel;
    pObjList->size = 0;
    pObjList->valid = 1;
}
