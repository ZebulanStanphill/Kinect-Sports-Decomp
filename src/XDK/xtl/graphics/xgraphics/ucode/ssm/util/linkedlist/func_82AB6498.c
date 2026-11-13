extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB6498 {
    void *data;
    struct ListItem_82AB6498 *pPrev;
    struct ListItem_82AB6498 *pNext;
} ListItem_82AB6498;

typedef struct ObjList_82AB6498 {
    void *pMemMgr;
    unsigned int unk4[3];
    ListItem_82AB6498 *pSentinel;
    unsigned int size;
    unsigned int valid;
} ObjList_82AB6498;

extern ListItem_82AB6498 *fn_82AB4C70(ListItem_82AB6498 *pItem);

ListItem_82AB6498 *fn_82AB6498(ObjList_82AB6498 *pObjList)
{
    ListItem_82AB6498 *pHead;
    ListItem_82AB6498 *pItem;

    LL_ASSERT(pObjList, 0xd3c);
    if (pObjList->size == 0)
        return SSM_NULL;
    pHead = pObjList->pSentinel == SSM_NULL ? SSM_NULL : pObjList->pSentinel->pNext;
    LL_ASSERT(pHead, 0xd47);
    LL_ASSERT(pHead != pObjList->pSentinel, 0xd4a);
    pItem = fn_82AB4C70(pHead);
    pObjList->size--;
    return pItem;
}
