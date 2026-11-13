extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

#define SSM_NULL 0

typedef struct ListItem_82AB54D0 {
    void *data;
    struct ListItem_82AB54D0 *pPrev;
    struct ListItem_82AB54D0 *pNext;
    unsigned int key;
    void *pObj;
} ListItem_82AB54D0;

typedef struct OList_82AB54D0 {
    void *pMemMgr;
    void *unk4;
    void *unk8;
    void *unkC;
    ListItem_82AB54D0 *pSentinel;
    unsigned int size;
    ListItem_82AB54D0 *pCurrent;
    unsigned int valid;
} OList_82AB54D0;

extern ListItem_82AB54D0 *fn_82AB4A28(void *pMemMgr);
extern void fn_82AB4B88(ListItem_82AB54D0 *pItem, ListItem_82AB54D0 *pNewItem);

void fn_82AB54D0(OList_82AB54D0 *pOList, unsigned int key, void *pObj)
{
    ListItem_82AB54D0 *pNewItem;
    ListItem_82AB54D0 *pSearchItem;

    LL_ASSERT(pOList, 0x477);
    pNewItem = fn_82AB4A28(pOList->pMemMgr);
    LL_ASSERT(pNewItem, 0x47b);
    pNewItem->key = key;
    pNewItem->pObj = pObj;
    pSearchItem = !pOList->pSentinel ? SSM_NULL : pOList->pSentinel->pNext;
    LL_ASSERT(pSearchItem, 0x486);
    while (pSearchItem != pOList->pSentinel) {
        if (pSearchItem->key > key)
            break;
        pSearchItem = pSearchItem->pNext;
        LL_ASSERT(pSearchItem, 0x490);
    }
    fn_82AB4B88(pSearchItem, pNewItem);
    if (pOList->size == 0)
        pOList->pSentinel->pNext = pNewItem;
    pOList->size++;
}
