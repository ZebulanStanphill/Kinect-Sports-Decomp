extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\shaderstore.cpp", line)

typedef void *(*AllocFn_82AB9918)(void *pContext, unsigned int size);
typedef void (*FreeFn_82AB9918)(void *pContext, void *p);

typedef struct ShaderStore_82AB9918 {
    void *pMemMgr;              /* 0x0 */
    void *pContext;             /* 0x4 */
    AllocFn_82AB9918 pfnAlloc;  /* 0x8 */
    FreeFn_82AB9918 pfnFree;    /* 0xc */
    unsigned int count;         /* 0x10 */
} ShaderStore_82AB9918;

typedef struct SSItem_82AB9918 {
    unsigned int id;            /* 0x0 */
    void *ILProg;               /* 0x4 */
    unsigned int numDwords;     /* 0x8 */
    void *pCSList;              /* 0xc */
    unsigned int refCount;      /* 0x10 */
} SSItem_82AB9918;

extern SSItem_82AB9918 *fn_82B6B128(void *pMemMgr);
extern void *fn_82AB68E0(void *pContext, AllocFn_82AB9918 pfnAlloc, FreeFn_82AB9918 pfnFree, int kind);
extern void fn_82AB9358(ShaderStore_82AB9918 *pShaderStore, SSItem_82AB9918 *pSSItem);
extern void *memcpy(void *dst, const void *src, unsigned int size);

SSItem_82AB9918 *fn_82AB9918(ShaderStore_82AB9918 *pShaderStore, const void *pILProg, unsigned int size)
{
    SSItem_82AB9918 *pNewSSItem;

    SS_ASSERT(pShaderStore, 0x71);
    pNewSSItem = fn_82B6B128(pShaderStore->pMemMgr);
    if (pNewSSItem == 0) {
        SS_ASSERT(pNewSSItem, 0x79);
        return 0;
    }
    pNewSSItem->id = pShaderStore->count;
    pShaderStore->count++;
    pNewSSItem->refCount = 1;
    pNewSSItem->numDwords = size >> 2;
    pNewSSItem->ILProg = pShaderStore->pfnAlloc(pShaderStore->pContext, size);
    if (pNewSSItem->ILProg == 0) {
        SS_ASSERT(pNewSSItem->ILProg, 0x8a);
        fn_82AB9358(pShaderStore, pNewSSItem);
        return 0;
    }
    memcpy(pNewSSItem->ILProg, pILProg, size);
    pNewSSItem->pCSList = fn_82AB68E0(pShaderStore->pContext, pShaderStore->pfnAlloc, pShaderStore->pfnFree, 3);
    if (pNewSSItem->pCSList == 0) {
        SS_ASSERT(pNewSSItem->pCSList, 0x9b);
        fn_82AB9358(pShaderStore, pNewSSItem);
        return 0;
    }
    return pNewSSItem;
}
