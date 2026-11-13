extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SC_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\ssmstatecompiler.cpp", line)

#define E_SSM_OK 0

typedef struct StateCompiler_82ABA320 {
    unsigned char pad0[0x10];
    void *shaderStore;
    unsigned char pad14[0xc];
    void *log;
    unsigned char pad24[8];
    void *f2c;
} StateCompiler_82ABA320;

extern void *fn_82AB9738(void *shaderStore, unsigned int shaderHandle);
extern void fn_82AB81E8(void *p);
extern void fn_82AB7010(void *ctx, void *p);
extern void fn_82BA02A8(void *log, const char *fmt, ...);
extern int fn_82B7D980(void *log, void *ctx, void *shader, void *pState);
extern int fn_82AB7C30(void *ctx);

int fn_82ABA320(StateCompiler_82ABA320 *pStateCompiler, unsigned int shaderHandle, void *pState, void *ctx)
{
    void *log;
    void *store;
    void *shader;
    int eResult;
    int r;

    SC_ASSERT(pStateCompiler, 0x282);
    SC_ASSERT(pState, 0x283);
    store = pStateCompiler->shaderStore;
    log = pStateCompiler->log;
    eResult = E_SSM_OK;
    shader = fn_82AB9738(store, shaderHandle);
    if (shader == 0) {
        SC_ASSERT(shader != 0, 0x290);
        return 0x13;
    }
    fn_82AB81E8(pStateCompiler->f2c);
    fn_82AB7010(ctx, pStateCompiler->f2c);
    fn_82BA02A8(log, "ShaderHandle  = %d\n", shaderHandle);
    r = fn_82B7D980(log, ctx, shader, pState);
    if (r != 0)
        eResult = r;
    r = fn_82AB7C30(ctx);
    if (r != 0)
        return r;
    SC_ASSERT(eResult == E_SSM_OK, 0x2aa);
    return eResult;
}
