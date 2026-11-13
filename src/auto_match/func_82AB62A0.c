extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB62A0 {
    void *data;
    struct ListItem_82AB62A0 *pPrev;
    struct ListItem_82AB62A0 *pNext;
} ListItem_82AB62A0;

typedef struct ObjList_82AB62A0 {
    void *pMemMgr;
    unsigned int unk4[3];
    ListItem_82AB62A0 *pSentinel;
    unsigned int size;
    unsigned int valid;
} ObjList_82AB62A0;

extern void fn_82AB4B88(ListItem_82AB62A0 *pItem, ListItem_82AB62A0 *pNewItem);

void fn_82AB62A0(ObjList_82AB62A0 *pObjList, ListItem_82AB62A0 *pItem)
{
    LL_ASSERT(pObjList, 0xc21);
    LL_ASSERT(pItem, 0xc21 + 1);
    LL_ASSERT(pItem != pObjList->pSentinel, 0xc21 + 2);
    fn_82AB4B88(pObjList->pSentinel, pItem);
    if (pObjList->size == 0)
        pObjList->pSentinel->pNext = pItem;
    pObjList->size++;
}
