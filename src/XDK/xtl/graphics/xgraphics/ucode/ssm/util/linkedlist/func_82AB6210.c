extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

typedef struct ListItem_82AB6210 {
    void *data;
    struct ListItem_82AB6210 *pPrev;
    struct ListItem_82AB6210 *pNext;
    unsigned int value;
} ListItem_82AB6210;

typedef struct ObjList_82AB6210 {
    void *pMemMgr;
} ObjList_82AB6210;

extern ListItem_82AB6210 *fn_82AB4A28(void *pMemMgr);
extern void fn_82AB6148(ObjList_82AB6210 *pObjList, ListItem_82AB6210 *pItem);

ListItem_82AB6210 *fn_82AB6210(ObjList_82AB6210 *pObjList, unsigned int value)
{
    ListItem_82AB6210 *pNewItem;

    LL_ASSERT(pObjList, 0xbfe);
    pNewItem = fn_82AB4A28(pObjList->pMemMgr);
    LL_ASSERT(pNewItem, 0xc03);
    pNewItem->value = value;
    fn_82AB6148(pObjList, pNewItem);
    return pNewItem;
}
