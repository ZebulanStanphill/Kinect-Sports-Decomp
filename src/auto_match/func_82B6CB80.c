typedef void *(*Alloc_82B6CB80)(void *, int);

typedef struct Recycler_82B6CB80 {
    void *ctx;
    Alloc_82B6CB80 alloc;
    void *freeMem;
    void *shaderStore;
    void *registry;
    void *tree;
    void *lists;
    void *pairs;
} Recycler_82B6CB80;

extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern void *fn_82B9F468(void *ctx, Alloc_82B6CB80 alloc, void *freeMem, int n);
extern void *fn_82AB68E0(void *ctx, Alloc_82B6CB80 alloc, void *freeMem, int n);
extern void *fn_82B6B008(int n, int size, Alloc_82B6CB80 alloc, void *freeMem, void *ctx);
extern void fn_82B6C878(Recycler_82B6CB80 *sr);

#define SR_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\shaderrecycler.cpp", line)

Recycler_82B6CB80 *fn_82B6CB80(void *ctx, Alloc_82B6CB80 AllocateSysMem, void *FreeSysMem, void *pShaderStore, void *pRegistry)
{
    Recycler_82B6CB80 *sr;

    SR_ASSERT(AllocateSysMem, 0xc9);
    SR_ASSERT(FreeSysMem, 0xca);
    SR_ASSERT(pShaderStore, 0xcb);
    SR_ASSERT(pRegistry, 0xcc);
    sr = (Recycler_82B6CB80 *)AllocateSysMem(ctx, 0x20);
    if (sr == 0) {
        SR_ASSERT(!"Failed to allocate a new Shader Recycler", 0xd2);
        return 0;
    }
    sr->ctx = ctx;
    sr->alloc = AllocateSysMem;
    sr->freeMem = FreeSysMem;
    sr->shaderStore = pShaderStore;
    sr->registry = pRegistry;
    sr->tree = fn_82B9F468(ctx, AllocateSysMem, FreeSysMem, 0x32);
    if (sr->tree == 0) {
        SR_ASSERT(!"SR_Create: Could not allocate Ternary Search Tree", 0xe5);
        fn_82B6C878(sr);
        return 0;
    }
    sr->lists = fn_82AB68E0(ctx, AllocateSysMem, FreeSysMem, 0x32);
    if (sr->lists == 0) {
        SR_ASSERT(!"SR_Create: Could not allocate Shader Lists Object List", 0xf2);
        fn_82B6C878(sr);
        return 0;
    }
    sr->pairs = fn_82B6B008(0x32, 8, AllocateSysMem, FreeSysMem, ctx);
    if (sr->pairs == 0) {
        SR_ASSERT(!"SR_Create: Could not preallocate Shader Pair strucutres", 0xff);
        fn_82B6C878(sr);
        return 0;
    }
    return sr;
}
