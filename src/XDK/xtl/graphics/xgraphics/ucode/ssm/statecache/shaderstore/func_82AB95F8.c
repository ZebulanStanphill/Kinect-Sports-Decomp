extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\shaderstore.cpp", line)

typedef struct SSItem_82AB95F8 {
    void *pMemMgr;
    unsigned int key0;      /* 0x04 */
    unsigned int key1;      /* 0x08 */
    void *list;             /* 0x0c */
    unsigned int refCount;  /* 0x10 */
} SSItem_82AB95F8;

typedef struct ShaderStore_82AB95F8 {
    void *pMemMgr;
    void *pContext;
    void *unk8;
    void (*pfnFree)(void *pContext, void *p);
    unsigned int count;
    void *pTable;           /* 0x14 */
    void *pHash;            /* 0x18 */
} ShaderStore_82AB95F8;

extern SSItem_82AB95F8 *fn_82B6E440(void *table, unsigned int index);
extern SSItem_82AB95F8 *fn_82B6E520(void *table, unsigned int index);
extern SSItem_82AB95F8 *fn_82B6E928(void *hash, unsigned int key0, unsigned int key1);
extern void fn_82AB9358(ShaderStore_82AB95F8 *pShaderStore, SSItem_82AB95F8 *pSSItem);

int fn_82AB95F8(ShaderStore_82AB95F8 *pShaderStore, unsigned int index, int *pReleased)
{
    SSItem_82AB95F8 *pSSItem;

    SS_ASSERT(pShaderStore, 0x23f);
    pSSItem = fn_82B6E440(pShaderStore->pTable, index);
    if (pSSItem != 0) {
        SS_ASSERT(pSSItem->refCount > 0, 0x24d);
        if (--pSSItem->refCount == 0) {
            pSSItem = fn_82B6E520(pShaderStore->pTable, index);
            SS_ASSERT(pSSItem, 0x258);
            pSSItem = fn_82B6E928(pShaderStore->pHash, pSSItem->key0, pSSItem->key1);
            SS_ASSERT(pSSItem, 0x260);
            fn_82AB9358(pShaderStore, pSSItem);
            if (pReleased) {
                *pReleased = 1;
            }
        } else {
            if (pReleased) {
                *pReleased = 0;
            }
        }
        return 0;
    }
    return 0x13;
}
