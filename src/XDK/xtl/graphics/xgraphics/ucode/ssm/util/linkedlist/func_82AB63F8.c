extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB63F8 {
    void *data;
    struct ListItem_82AB63F8 *pPrev;
    struct ListItem_82AB63F8 *pNext;
} ListItem_82AB63F8;

typedef struct ObjList_82AB63F8 {
    void *pMemMgr;
    unsigned int unk4[3];
    ListItem_82AB63F8 *pSentinel;
    unsigned int size;
    unsigned int valid;
} ObjList_82AB63F8;

ListItem_82AB63F8 *fn_82AB63F8(ObjList_82AB63F8 *pObjList)
{
    ListItem_82AB63F8 *pHead;

    LL_ASSERT(pObjList, 0xc82);
    if (pObjList->size == 0)
        return SSM_NULL;
    pHead = pObjList->pSentinel == SSM_NULL ? SSM_NULL : pObjList->pSentinel->pNext;
    LL_ASSERT(pHead, 0xc8e);
    return pHead;
}
