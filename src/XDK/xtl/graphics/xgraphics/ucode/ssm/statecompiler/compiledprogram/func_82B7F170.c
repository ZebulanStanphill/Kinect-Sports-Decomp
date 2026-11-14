extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CP_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledprogram.cpp", line)

typedef struct CompiledProgram_82B7F170 {
    void *ctx;
    void *(*AllocateSysMem)(void *ctx, unsigned int size);
    void (*FreeSysMem)(void *ctx, void *p);
    char padC[0x18 - 0xc];
    void *buffers[6];
    void *pCS_ps;
    void *pCS_vs;
    void *pCode0;
    void *pCode1;
    char pad40[0x48 - 0x40];
    unsigned int refCount;
} CompiledProgram_82B7F170;

extern void fn_82AB6BC8(void *pCS);

int fn_82B7F170(CompiledProgram_82B7F170 *pCP)
{
    void *ctx;
    int i;

    CP_ASSERT(pCP, 0xcb);
    CP_ASSERT(pCP->refCount > 0, 0xcc);
    if (--pCP->refCount == 0) {
        ctx = pCP->ctx;
        if (pCP->pCode0 != 0) {
            pCP->FreeSysMem(ctx, pCP->pCode0);
        }
        if (pCP->pCode1 != 0) {
            pCP->FreeSysMem(ctx, pCP->pCode1);
        }
        if (pCP->pCS_ps != 0) {
            fn_82AB6BC8(pCP->pCS_ps);
        }
        if (pCP->pCS_vs != 0) {
            fn_82AB6BC8(pCP->pCS_vs);
        }
        for (i = 0; i < 6; i++) {
            if (pCP->buffers[i] != 0) {
                pCP->FreeSysMem(ctx, pCP->buffers[i]);
            }
        }
        pCP->FreeSysMem(ctx, pCP);
    }
    return 0;
}
