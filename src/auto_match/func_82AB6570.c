extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB6570 {
    void *data;
    struct ListItem_82AB6570 *pPrev;
    struct ListItem_82AB6570 *pNext;
} ListItem_82AB6570;

typedef struct ObjList_82AB6570 {
    void *pMemMgr;
    unsigned int unk4[3];
    ListItem_82AB6570 *pSentinel;
    unsigned int size;
    unsigned int valid;
} ObjList_82AB6570;

extern ListItem_82AB6570 *fn_82AB4C70(ListItem_82AB6570 *pItem);

ListItem_82AB6570 *fn_82AB6570(ObjList_82AB6570 *pObjList)
{
    ListItem_82AB6570 *pTail;
    ListItem_82AB6570 *pItem;

    LL_ASSERT(pObjList, 0xd66);
    if (pObjList->size == 0)
        return SSM_NULL;
    pTail = pObjList->pSentinel == SSM_NULL ? SSM_NULL : pObjList->pSentinel->pPrev;
    LL_ASSERT(pTail, 0xd71);
    LL_ASSERT(pTail != pObjList->pSentinel, 0xd74);
    pItem = fn_82AB4C70(pTail);
    pObjList->size--;
    return pItem;
}
