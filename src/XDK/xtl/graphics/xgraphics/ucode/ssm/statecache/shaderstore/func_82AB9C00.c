extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\shaderstore.cpp", line)

typedef struct SSItem_82AB9C00 {
    unsigned int handle;
    void *data;
    unsigned int size;
    int fc;
    int refCount;
} SSItem_82AB9C00;

typedef struct ShaderStore_82AB9C00 {
    char pad0[0x14];
    void *handleTable;      /* 0x14 */
    void *dataTable;        /* 0x18 */
} ShaderStore_82AB9C00;

extern SSItem_82AB9C00 *fn_82B6E830(void *table, const void *data, unsigned int count);
extern SSItem_82AB9C00 *fn_82AB9918(ShaderStore_82AB9C00 *pShaderStore, const void *data, unsigned int size);
extern void fn_82B6E398(void *table, unsigned int handle, SSItem_82AB9C00 *item);
extern void fn_82B6E770(void *table, void *data, unsigned int size, SSItem_82AB9C00 *item);

int fn_82AB9C00(ShaderStore_82AB9C00 *pShaderStore, const void *data, unsigned int size, unsigned int *pHandle)
{
    SSItem_82AB9C00 *pSSItem;
    SSItem_82AB9C00 *pNewSSItem;
    unsigned int dwords = size >> 2;

    SS_ASSERT(pShaderStore, 0x1ed);
    pSSItem = fn_82B6E830(pShaderStore->dataTable, data, dwords);
    if (pSSItem != 0) {
        pSSItem->refCount++;
        *pHandle = pSSItem->handle;
        return 0;
    }
    pNewSSItem = fn_82AB9918(pShaderStore, data, size);
    if (pNewSSItem == 0) {
        SS_ASSERT(pNewSSItem, 0x209);
        return 0x10;
    }
    fn_82B6E398(pShaderStore->handleTable, pNewSSItem->handle, pNewSSItem);
    fn_82B6E770(pShaderStore->dataTable, pNewSSItem->data, pNewSSItem->size, pNewSSItem);
    SS_ASSERT(pNewSSItem->handle > 0, 0x217);
    *pHandle = pNewSSItem->handle;
    return 0;
}
