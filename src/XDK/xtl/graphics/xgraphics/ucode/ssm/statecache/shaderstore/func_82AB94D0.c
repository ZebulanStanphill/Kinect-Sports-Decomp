extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\shaderstore.cpp", line)

typedef struct SSItem_82AB94D0 {
    void *pMemMgr;
    unsigned int key0;
    unsigned int key1;
} SSItem_82AB94D0;

typedef struct ShaderStore_82AB94D0 {
    void *pMemMgr;
    void *pContext;
    void *unk8;
    void (*pfnFree)(void *pContext, void *p);
    unsigned int count;
    void *pTable;
    void *pHash;
} ShaderStore_82AB94D0;

extern SSItem_82AB94D0 *fn_82B6E520(void *table, unsigned int index);
extern void *fn_82B6E928(void *hash, unsigned int key0, unsigned int key1);
extern void fn_82AB9358(ShaderStore_82AB94D0 *pShaderStore, void *pSSItem);
extern void fn_82B6E2F8(void *table);
extern void fn_82B6E6D0(void *hash);
extern void fn_82B6B0C8(void *pMemMgr);

int fn_82AB94D0(ShaderStore_82AB94D0 *pShaderStore)
{
    unsigned int i;
    SSItem_82AB94D0 *pEntry;
    void *pSSItem;

    SS_ASSERT(pShaderStore, 0x185);
    if (pShaderStore->pTable && pShaderStore->pHash) {
        for (i = 1; i < pShaderStore->count; i++) {
            pEntry = fn_82B6E520(pShaderStore->pTable, i);
            if (pEntry) {
                pSSItem = fn_82B6E928(pShaderStore->pHash, pEntry->key0, pEntry->key1);
                SS_ASSERT(pSSItem, 0x1a7);
                fn_82AB9358(pShaderStore, pSSItem);
            }
        }
    }
    if (pShaderStore->pTable) {
        fn_82B6E2F8(pShaderStore->pTable);
    }
    if (pShaderStore->pHash) {
        fn_82B6E6D0(pShaderStore->pHash);
    }
    if (pShaderStore->pMemMgr) {
        fn_82B6B0C8(pShaderStore->pMemMgr);
    }
    pShaderStore->pfnFree(pShaderStore->pContext, pShaderStore);
    return 0;
}
