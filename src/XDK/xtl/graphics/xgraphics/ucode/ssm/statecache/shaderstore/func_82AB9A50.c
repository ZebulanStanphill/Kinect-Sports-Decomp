typedef void *(*Alloc_82AB9A50)(void *, int);

typedef struct ShaderStore_82AB9A50 {
    void *pHandleMemoryMgr;
    void *ctx;
    Alloc_82AB9A50 alloc;
    void *freeMem;
    int initialized;
    void *handleTable;
    void *ILTable;
} ShaderStore_82AB9A50;

extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern void *fn_82B6B008(int n, int size, Alloc_82AB9A50 alloc, void *freeMem, void *ctx);
extern void *fn_82B6E208(void *ctx, Alloc_82AB9A50 alloc, void *freeMem, void *pOListFactory, int n);
extern void *fn_82B6E5C0(void *ctx, Alloc_82AB9A50 alloc, void *freeMem, void *pOListFactory, int n);
extern void fn_82AB94D0(ShaderStore_82AB9A50 *ss);

#define SS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\shaderstore.cpp", line)

ShaderStore_82AB9A50 *fn_82AB9A50(void *ctx, Alloc_82AB9A50 AllocateSysMem, void *FreeSysMem, void *pOListFactory, int nHandles)
{
    ShaderStore_82AB9A50 *pNewSS;

    SS_ASSERT(AllocateSysMem, 0x12a);
    SS_ASSERT(FreeSysMem, 0x12b);
    SS_ASSERT(pOListFactory, 0x12c);
    pNewSS = (ShaderStore_82AB9A50 *)AllocateSysMem(ctx, 0x1c);
    if (pNewSS == 0) {
        SS_ASSERT(pNewSS, 0x134);
        return 0;
    }
    pNewSS->ctx = ctx;
    pNewSS->alloc = AllocateSysMem;
    pNewSS->freeMem = FreeSysMem;
    pNewSS->pHandleMemoryMgr = fn_82B6B008(nHandles, 0x14, AllocateSysMem, FreeSysMem, ctx);
    if (pNewSS->pHandleMemoryMgr == 0) {
        SS_ASSERT(pNewSS->pHandleMemoryMgr, 0x146);
        fn_82AB94D0(pNewSS);
        return 0;
    }
    pNewSS->handleTable = fn_82B6E208(ctx, AllocateSysMem, FreeSysMem, pOListFactory, 100);
    if (pNewSS->handleTable == 0) {
        SS_ASSERT(pNewSS->handleTable, 0x153);
        fn_82AB94D0(pNewSS);
        return 0;
    }
    pNewSS->ILTable = fn_82B6E5C0(ctx, AllocateSysMem, FreeSysMem, pOListFactory, 100);
    if (pNewSS->ILTable == 0) {
        SS_ASSERT(pNewSS->ILTable, 0x160);
        fn_82AB94D0(pNewSS);
        return 0;
    }
    pNewSS->initialized = 1;
    return pNewSS;
}
