extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

typedef void *(*AllocFn_82AB68E0)(void *ctx, unsigned int size);
typedef void (*FreeFn_82AB68E0)(void *ctx, void *p);

typedef struct ObjList_82AB68E0 {
    void *pMemMgr;
    void *ctx;
    AllocFn_82AB68E0 AllocateSysMem;
    FreeFn_82AB68E0 FreeSysMem;
    void *pSentinel;
    unsigned int size;
    unsigned int valid;
} ObjList_82AB68E0;

extern void *fn_82B6B008(void *heap, unsigned int size, AllocFn_82AB68E0 alloc, FreeFn_82AB68E0 free, void *ctx);
extern void fn_82AB5EC0(ObjList_82AB68E0 *pObjList, void *pMemMgr);

ObjList_82AB68E0 *fn_82AB68E0(void *ctx, AllocFn_82AB68E0 AllocateSysMem, FreeFn_82AB68E0 FreeSysMem, void *heap)
{
    ObjList_82AB68E0 *pNewList;
    void *pMemMgr;

    LL_ASSERT(AllocateSysMem, 0xb2c);
    LL_ASSERT(FreeSysMem, 0xb2d);
    pNewList = (ObjList_82AB68E0 *)AllocateSysMem(ctx, 0x1c);
    LL_ASSERT(pNewList, 0xb33);
    pNewList->ctx = ctx;
    pNewList->AllocateSysMem = AllocateSysMem;
    pNewList->FreeSysMem = FreeSysMem;
    pMemMgr = fn_82B6B008(heap, 0x10, AllocateSysMem, FreeSysMem, ctx);
    LL_ASSERT(pMemMgr, 0xb3e);
    fn_82AB5EC0(pNewList, pMemMgr);
    pNewList->valid = 0;
    return pNewList;
}
