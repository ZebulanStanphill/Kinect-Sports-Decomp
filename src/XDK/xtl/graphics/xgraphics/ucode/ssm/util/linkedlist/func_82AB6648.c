extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB6648 {
    void *data;
    struct ListItem_82AB6648 *pPrev;
    struct ListItem_82AB6648 *pNext;
} ListItem_82AB6648;

typedef struct ObjList_82AB6648 {
    void *pMemMgr;
    unsigned int unk4[3];
    ListItem_82AB6648 *pSentinel;
    unsigned int size;
    unsigned int valid;
} ObjList_82AB6648;

extern void fn_82AB4C70(ListItem_82AB6648 *pItem);

void fn_82AB6648(ObjList_82AB6648 *pObjList, ListItem_82AB6648 *pItem)
{
    LL_ASSERT(pObjList, 0xd91);
    LL_ASSERT(pItem, 0xd92);
    LL_ASSERT(pItem != pObjList->pSentinel, 0xd95);
    fn_82AB4C70(pItem);
    pObjList->size--;
}
