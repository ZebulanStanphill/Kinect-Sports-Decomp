extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define TT_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\ternary.cpp", line)

typedef void *(*AllocFn_82B9F468)(void *ctx, unsigned int size);
typedef void (*FreeFn_82B9F468)(void *ctx, void *p);

typedef struct Tree_82B9F468 {
    void *root;
    void *ctx;
    AllocFn_82B9F468 AllocateSysMem;
    FreeFn_82B9F468 FreeSysMem;
    void *pMemoryMgr;
    unsigned int f14;
    unsigned int f18;
} Tree_82B9F468;

extern void *fn_82B6B008(void *heap, unsigned int size, AllocFn_82B9F468 alloc, FreeFn_82B9F468 free, void *ctx);

Tree_82B9F468 *fn_82B9F468(void *ctx, AllocFn_82B9F468 AllocateSysMem, FreeFn_82B9F468 FreeSysMem, void *heap)
{
    Tree_82B9F468 *pNewTree;

    TT_ASSERT(AllocateSysMem, 0x42);
    TT_ASSERT(FreeSysMem, 0x43);
    pNewTree = (Tree_82B9F468 *)AllocateSysMem(ctx, 0x1c);
    TT_ASSERT(pNewTree, 0x46);
 pNewTree->root = 0;
 pNewTree->f14 = 0;
 pNewTree->f18 = 0;
 pNewTree->ctx = ctx;
 pNewTree->AllocateSysMem = AllocateSysMem;
 pNewTree->FreeSysMem = FreeSysMem;
    pNewTree->pMemoryMgr = fn_82B6B008(heap, 0x14, AllocateSysMem, FreeSysMem, ctx);
    TT_ASSERT(pNewTree->pMemoryMgr, 0x58);
    return pNewTree;
}
