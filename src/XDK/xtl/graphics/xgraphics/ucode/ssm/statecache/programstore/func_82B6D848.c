extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\programstore.cpp", line)

typedef struct VidMem_82B6D848 {
    unsigned int uptrLinearAddr;
    unsigned int alignedLinearAddr;
    unsigned int secondAddr;
    unsigned int alignedSecondAddr;
} VidMem_82B6D848;

typedef struct Allocator_82B6D848 {
    void *pContext;
    void *unused4;
    void *unused8;
    int (*pfnAlloc)(void *pContext, unsigned int size, int flags, VidMem_82B6D848 *pVidMem);
} Allocator_82B6D848;

int fn_82B6D848(Allocator_82B6D848 *pAllocator, unsigned int count, VidMem_82B6D848 *pVidMem)
{
    int hr;

    hr = pAllocator->pfnAlloc(pAllocator->pContext, (count + 8) * 4, 1, pVidMem);
    if (hr == 0) {
        SS_ASSERT(pVidMem, 0x410);
        SS_ASSERT(pVidMem->uptrLinearAddr, 0x411);
        pVidMem->alignedLinearAddr = (pVidMem->uptrLinearAddr + 0x20) & ~0x1f;
        pVidMem->alignedSecondAddr = (pVidMem->secondAddr + 0x20) & ~0x1f;
    }
    return hr;
}
